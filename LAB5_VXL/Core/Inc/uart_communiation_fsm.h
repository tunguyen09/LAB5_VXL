/*
 * uart_communiation_fsm.h
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */

#include "main.h"
#ifndef INC_UART_COMMUNIATION_FSM_H_
#define INC_UART_COMMUNIATION_FSM_H_

#define READY		3
#define SENDING		4
#define WATING_VERIFIED		5
#define COMPLETE	6

extern uint8_t uart_com_status;
void uart_communication_fsm();

#endif /* INC_UART_COMMUNIATION_FSM_H_ */
