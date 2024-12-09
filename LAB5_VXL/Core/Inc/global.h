/*
 * global.h
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */
#include "main.h"

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_


#define MAX_BUFFER_SIZE	30
extern uint8_t temp;
extern uint8_t buffer[];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

extern uint8_t command_flag;
extern uint8_t command_data[];
extern uint32_t ADC_value;

#endif /* INC_GLOBAL_H_ */
