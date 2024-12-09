/*
 * uart_communiation_fsm.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */

#include "uart_communiation_fsm.h"
#include "command_parser_fsm.h"
#include "main.h"
#include "global.h"

ADC_HandleTypeDef hadc1;
UART_HandleTypeDef huart2;

uint8_t uart_com_status = READY;
uint8_t ADC_value_memory = 0;
uint8_t str[];

void uart_communication_fsm(){
	switch(uart_com_status){
		case READY:
			ADC_value = HAL_ADC_GetValue(&hadc1);
			if(command_flag == 1 && command_data == "RST"){
				uart_com_status = SENDING;
				ADC_value_memory = ADC_value;
			}
			if(command_flag == 1 && command_data == "OK"){
				uart_com_status = COMPLETE;
			}
			break;
		case SENDING:
//			HAL_UART_Transmit(&huart2, str, sprintf(str, "!ADC=%d#\n", ADC_value), 1000);
			uart_com_status = WATING_VERIFIED;
			break;
		case WATING_VERIFIED:

			break;
		case COMPLETE:
			break;
		default:
			break;
	}
}
