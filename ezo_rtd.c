/*
 * probe.c
 *
 *  Created on: Feb 5, 2020
 *      Author: mathe
 */

#include <stdio.h>

#include <ti/drivers/I2C.h>

#include "app.h"
#include "ezo_rtd.h"
#include "ti_drivers_config.h"


// These variables must be declared in the application program to communicate over I2C
extern I2C_Handle i2c;
extern I2C_Params i2c_params;
extern I2C_Transaction i2c_transaction;


void rtd_send_cmd(char *buf, size_t size) {
    /*
     * Send a command to the EZ RTD device
     *
     * Args:
     *  buf (char *): command string to send the device
     *  size (size_t): size of the command string, not including the terminating null
     *
     * Returns:
     *  None
     */

    i2c_transaction.writeBuf = buf;
    i2c_transaction.writeCount = size;
    i2c_transaction.readCount = 0;
    i2c_transaction.slaveAddress = RTD_ADDRESS;
    if(!I2C_transfer(i2c, &i2c_transaction))
        while(1); // ERROR transferring I2C transaction???
}


void rtd_read_response(char *buf, size_t size) {
    /*
     * Read a response from the device
     *
     * Args:
     *  buf (char *): a buffer to receive the response in
     *  size (size_t): the size of the buffer provided in bytes
     *
     * Returns:
     *  None
     */
    i2c_transaction.readBuf = buf;
    i2c_transaction.readCount = size;
    i2c_transaction.writeCount = 0;
    i2c_transaction.slaveAddress = RTD_ADDRESS;
    if(!I2C_transfer(i2c, &i2c_transaction))
        while(1); // ERROR transferring I2C transaction???
}


void set_units(char unit) {
    /*
     * Set the units of the device
     * Possible options: c, f, k (Celsius, Fahrenheit, or Kelvin)
     * Default is Celsius
     *
     * Args:
     *  unit (char): c, f, or k
     *
     * Returns:
     *  None
     *
     * 300ms delay before response can be received
     */
    char cmd[CMD_BUFFER_SIZE];
    sprintf(cmd, "s,%c", unit);
    rtd_send_cmd(cmd, 3);
}


void enable_data_logger(uint16_t n) {
    /*
     * Enables the on-chip data logger of the EZO RTD
     *
     * Args:
     *  n (uint8_t): the time period in 10 second intervals
     *
     * Returns:
     *  None
     *
     * 300ms delay before response can be received
     */
    char cmd[CMD_BUFFER_SIZE];
    sprintf(cmd, "d,%d", n);
    rtd_send_cmd(cmd, 3);
}


void disable_data_logger(void) {
    /*
     * Disables the on-chip data logger of the EZO RTD
     *
     * Args:
     *  None
     *
     * Returns:
     *  None
     *
     * 300ms delay before response can be received
     */
    char cmd[CMD_BUFFER_SIZE] = "d,0";
    rtd_send_cmd(cmd, 3);
}


void memory_recall(void) {
    /*
     * Recall 1 sequential stored reading
     *
     * Args:
     *  None
     *
     * Returns:
     *  None
     *
     * 300ms delay before response can be received
     */
    char cmd[CMD_BUFFER_SIZE] = "m";
    rtd_send_cmd(cmd, 3);
}


void memory_clear(void) {
    /*
     * Clear the stored memory on the EZO board
     *
     * Args:
     *  None
     *
     * Returns:
     *  None
     *
     * 300ms delay before response can be received
     */
    char cmd[CMD_BUFFER_SIZE] = "m,clear";
    rtd_send_cmd(cmd, 7);
}


void device_information(void) {
    /*
     * Retrieve device information for the EZO board
     *
     * Args:
     *  buf (char *): buffer to receive the information in
     *  size (size_t): size of the buffer provided
     *
     * Returns:
     *  None
     *
     * 300ms delay before response can be received
     */
    char cmd[CMD_BUFFER_SIZE] = "i";
    rtd_send_cmd(cmd, 1);
}


void status(void) {
    /*
     * Read device voltage at Vcc and reason for last restart
     *
     * Args:
     *  None
     *
     * Returns:
     *  None
     *
     * 300ms delay before response can be received
     */
    char cmd[CMD_BUFFER_SIZE] = "status";
    rtd_send_cmd(cmd, 6);
}


void sleep(void) {
    /*
     * Put the device to sleep.
     * Device may be woken up by sending any command.
     * Do not try to read response after sleep command.
     *
     * Args:
     *  None
     *
     * Returns:
     *  None
     */
    char cmd[CMD_BUFFER_SIZE] = "sleep";
    rtd_send_cmd(cmd, 5);
}


void enable_protocol_lock(void) {
    /*
     * Enable the protocol lock on the EZO board.  This locks the
     * device in I2C mode.
     *
     * Args:
     *  None
     *
     * Returns:
     *  None
     *
     * 300ms delay before response can be received
     */
    char cmd[CMD_BUFFER_SIZE] = "plock,1";
    rtd_send_cmd(cmd, 7);
}


void disable_protocol_lock(void) {
    /*
     * Disable the protocol lock on the EZO board.
     *
     * Args:
     *  None
     *
     * Returns:
     *  None
     *
     * 300ms delay before response can be received
     */
    char cmd[CMD_BUFFER_SIZE] = "plock,0";
    rtd_send_cmd(cmd, 7);
}


void protocol_lock_status(void) {
    /*
     * Request the protocol lock status of the EZO board
     *
     * Args:
     *  None
     *
     * Returns:
     *  None
     *
     * 300ms delay before response can be received
     */
    char cmd[CMD_BUFFER_SIZE] = "plock,?";
    rtd_send_cmd(cmd, 7);
}


void factory_reset(void) {
    /*
     * Reset the EZO board to the default factory state
     * This will not take the device out of I2C mode
     *
     * Args:
     *  None
     *
     * Returns:
     *  None
     */
    char cmd[CMD_BUFFER_SIZE] = "factory";
    rtd_send_cmd(cmd, 7);
}
