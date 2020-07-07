/*
 * ezo_ph.c
 *
 *  Created on: Mar 9, 2020
 *      Author: mathe
 */
#include <stdio.h>

#include <ti/drivers/I2C.h>

#include "app.h"
#include "ezo_ph.h"
#include "ti_drivers_config.h"

// These variables must be declared in the application program to communicate over I2C
extern I2C_Handle i2c;
extern I2C_Params i2c_params;
extern I2C_Transaction i2c_transaction;



void ph_send_cmd(char *buf, size_t size) {
    /*
     * Send a command to the EZ pH device
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
    i2c_transaction.slaveAddress = PH_ADDRESS;
    if(!I2C_transfer(i2c, &i2c_transaction))
        while(1); // ERROR transferring I2C transaction???
}


void ph_read_response(char *buf, size_t size) {
    /*
     * Read a response from the EZO pH device
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
    i2c_transaction.slaveAddress = PH_ADDRESS;
    if(!I2C_transfer(i2c, &i2c_transaction))
        while(1); // ERROR transferring I2C transaction???
}
