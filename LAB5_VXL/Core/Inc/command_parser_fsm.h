/*
 * command_parser_fsm.h
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */

#ifndef INC_COMMAND_PARSER_FSM_H_
#define INC_COMMAND_PARSER_FSM_H_

#include "main.h"

#define INIT_COMMAND_PARSER	0
#define START				1
#define END					2
extern uint8_t command_parser_status;

void command_parser_fsm();



#endif /* INC_COMMAND_PARSER_FSM_H_ */
