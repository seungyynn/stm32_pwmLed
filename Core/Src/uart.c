/*
 * uart.c
 *
 *  Created on: Jan 10, 2024
 *      Author: user
 */

#include "uart.h"

UART_HandleTypeDef *huart;	//private한 변수

void initUart(UART_HandleTypeDef *inHuart) {
	huart = inHuart;
}

int _write(int file, char *p, int len){
	HAL_UART_Transmit(huart, (uint8_t *)p, len, len);
	return len;
}
