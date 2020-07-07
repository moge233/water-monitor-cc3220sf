/*
 * probe.h
 *
 *  Created on: Feb 5, 2020
 *      Author: mathe
 */

#ifndef EZO_RTD_H_
#define EZO_RTD_H_

#define RTD_ADDRESS 0x66


// Choose Fahrenheit, Celsius, or Kelvin
//#define CELSIUS
#define FAHRENHEIT
//#define KELVIN


void rtd_send_cmd(char *, size_t);
void rtd_read_response(char *, size_t);
void set_units(char);
void enable_data_logger(uint16_t);
void disable_data_logger(void);
void memory_recall(void);
void memory_clear(void);
void device_information(void);
void status(void);
void sleep(void);
void enable_protocol_lock(void);
void disable_protocol_lock(void);
void protocol_lock_status(void);
void factory_reset(void);


#endif /* EZO_RTD_H_ */
