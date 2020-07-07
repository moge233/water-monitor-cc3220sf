/*
 * ezo_ph.h
 *
 *  Created on: Mar 9, 2020
 *      Author: mathe
 */

#ifndef EZO_PH_H_
#define EZO_PH_H_

#define PH_ADDRESS 0x63

void ph_send_cmd(char *, size_t);
void ph_read_response(char *, size_t);

#endif /* EZO_PH_H_ */
