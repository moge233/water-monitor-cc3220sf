/*
 * app.c
 *
 *  Created on: Mar 9, 2020
 *      Author: mathe
 */

#include <xdc/std.h>
#include <xdc/cfg/global.h>

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Semaphore.h>

#include <ti/drivers/GPIO.h>
#include <ti/drivers/I2C.h>
#include <ti/drivers/Timer.h>
#include <ti/drivers/UART.h>


#include "app.h"
#include "ti_drivers_config.h"
#include "ezo_rtd.h"
#include "ezo_ph.h"


void TemperatureTaskFxn(UArg, UArg);
void PhTaskFxn(UArg, UArg);
void UartTaskFxn(UArg, UArg);
void TempTimerFxn(Timer_Handle);
void PhTimerFxn(Timer_Handle);
void Sw2_callback(uint8_t);
void Sw3_callback(uint8_t);

// Global variables
I2C_Handle i2c;
I2C_Params i2c_params;
I2C_Transaction i2c_transaction;

// Application variables
static UART_Handle uart;
static UART_Params uart_params;

static Timer_Handle temp_timer;
static Timer_Params temp_timer_params;
static Timer_Handle ph_timer;
static Timer_Params ph_timer_params;

static char temp_buffer[MAX_BUFFER_SIZE];  // Buffer for reading the temp.
static char ph_buffer[MAX_BUFFER_SIZE];    // Buffer for reading the pH

static uint8_t temp_timer_done = 0;
static uint8_t ph_timer_done = 0;

static uint8_t read_mode = 0;
static uint8_t request_read = 0;


#define TEMP_EVENT  Event_Id_00
#define PH_EVENT    Event_Id_01


void App_init(void) {
    /*
     * Initialize all TI drivers needed by the application
     */

    // Initialize the GPIO
    // SW2 = change mode; SW3 = request reading in single read mode
    GPIO_init();
    GPIO_setCallback(CONFIG_GPIO_0, Sw2_callback);
    GPIO_setCallback(CONFIG_GPIO_1, Sw3_callback);
    GPIO_enableInt(CONFIG_GPIO_0);
    GPIO_enableInt(CONFIG_GPIO_1);

    // Initialize the UART
    // 115200 baud, 8 bit data, no parity, 1 stop bit

    UART_init();
    UART_Params_init(&uart_params);
    uart_params.baudRate = 115200;
    uart_params.dataLength = UART_LEN_8;
    uart_params.parityType = UART_PAR_NONE;
    uart_params.stopBits = UART_STOP_ONE;
    uart_params.readDataMode = UART_DATA_TEXT;
    uart_params.writeDataMode = UART_DATA_TEXT;
    uart_params.readMode = UART_MODE_BLOCKING;
    uart_params.writeMode = UART_MODE_BLOCKING;
    uart_params.readTimeout = UART_WAIT_FOREVER;
    uart_params.writeTimeout = UART_WAIT_FOREVER;
    uart_params.readReturnMode = UART_RETURN_NEWLINE;
    uart_params.readEcho = UART_ECHO_OFF;
    uart = UART_open(CONFIG_UART_0, &uart_params);
    if(uart == NULL) {
        // TODO: add logging to log errors
        while(1); // ERROR could not open UART
    }

    Timer_init();
    Timer_Params_init(&temp_timer_params);
    temp_timer_params.periodUnits = Timer_PERIOD_US;
    temp_timer_params.period = TEMP_TIMER_PERIOD;
    temp_timer_params.timerCallback = TempTimerFxn;
    temp_timer_params.timerMode = Timer_ONESHOT_CALLBACK;
    temp_timer = Timer_open(CONFIG_TIMER_0, &temp_timer_params);
    if(temp_timer == NULL) {
        // TODO: add logging and log the error
        while(1); // ERROR opening temperature timer
    }
    Timer_Params_init(&ph_timer_params);
    ph_timer_params.periodUnits = Timer_PERIOD_US;
    ph_timer_params.period = PH_TIMER_PERIOD;
    ph_timer_params.timerCallback = PhTimerFxn;
    ph_timer_params.timerMode = Timer_ONESHOT_CALLBACK;
    ph_timer = Timer_open(CONFIG_TIMER_1, &ph_timer_params);
    if(ph_timer == NULL) {
        // TODO: add logging and log the error
        while(1); // ERROR opening pH timer
    }

    I2C_init();
    I2C_Params_init(&i2c_params);
    i2c_params.bitRate = I2C_400kHz;
    i2c = I2C_open(CONFIG_I2C_0, &i2c_params);
    if(i2c == NULL) {
        // TODO: add logging and log the error
        while(1); // ERROR opening I2C
    }
}


void TemperatureTaskFxn(UArg a0, UArg a1) {
    /*
     * Get the temperature from the temperature probe and read the
     * response.
     */

    while(1) {
        // TemperatureTaskFxn loop
        if(!read_mode || (read_mode && request_read)) {
            Semaphore_pend(I2C_sem, BIOS_WAIT_FOREVER);
            rtd_send_cmd("r", 1);
            temp_timer_done = 0;
            Timer_start(temp_timer);
            while(!temp_timer_done);
            rtd_read_response(temp_buffer, MAX_BUFFER_SIZE);
            Event_post(ProbeReadingReady, TEMP_EVENT);
        }
    }
}


void PhTaskFxn(UArg a0, UArg a1) {
    /*
     * Get the pH from the pH probe and read the response
     */

    while(1) {
        // PhTaskFxn loop
        if(!read_mode || (read_mode && request_read)) {
            Semaphore_pend(I2C_sem, BIOS_WAIT_FOREVER);
            //ph_send_cmd("r", 1);
            ph_timer_done = 0;
            Timer_start(ph_timer);
            while(!ph_timer_done);
            //ph_read_response(ph_buffer, MAX_BUFFER_SIZE);
            Event_post(ProbeReadingReady, PH_EVENT);
        }
    }
}


void UartTaskFxn(UArg a0, UArg a1) {
    /*
     * Send the temperature response to the UART
     */

    UInt events;

    Semaphore_post(I2C_sem);

    while(1) {
        // UartTaskFxn loop
        events = Event_pend(ProbeReadingReady, Event_Id_NONE, TEMP_EVENT + PH_EVENT, BIOS_WAIT_FOREVER);
        if(events & TEMP_EVENT) {
            UART_write(uart, temp_buffer+1, MAX_BUFFER_SIZE);
            UART_write(uart, "\n", 1);
        }
        if(events & PH_EVENT) {
            UART_write(uart, ph_buffer+1, MAX_BUFFER_SIZE);
            UART_write(uart, "\n", 1);
        }
        if(request_read)
            request_read = 0;
        Semaphore_post(I2C_sem);
    }
}


void TempTimerFxn(Timer_Handle handle) {
    /*
     * Callback function for temperature probe timer
     */
    temp_timer_done = 1;
}


void PhTimerFxn(Timer_Handle handle) {
    /*
     * Callback function for the pH probe timer
     */
    ph_timer_done = 1;
}


void Sw2_callback(uint8_t index) {
    /*
     * Switch 2 callback function
     * Toggles the mode between continuous read mode and single read mode
     */
    if(read_mode)
        read_mode = 0;      // Continuous read mode
    else
        read_mode = 1;      // Single read mode
}


void Sw3_callback(uint8_t index) {
    /*
     * Switch 3 callback function
     * Requests a reading when the device is in single read mode
     */
    if(!request_read)
        request_read = 1;
}
