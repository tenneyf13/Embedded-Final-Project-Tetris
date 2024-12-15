/*
 * Button_Driver.h
 *
 *  Created on: Sep 24, 2024
 *      Author: francescatenney
 */


#ifndef BUTTON_DRIVER_H_
#define BUTTON_DRIVER_H_

#include "stm32f4xx_hal.h"
#include "InterruptControl.h"
#include <stdio.h>
#include <stdbool.h>

//PA0 A =GPIOA pin = 0
#define BUTTON_PORT_VALUE 0 //since offset is zero in RCC_
//AHB1ENR to get to GPIOA
#define BUTTON_PIN_NUMBER GPIO_PIN_0
#define BUTTON_PRESSED 1
#define BUTTON_NOT_PRESSED 0

void Button_Interrupt_Init(); //this will call GPIO_Init which calls clock enable
bool Button_Pressed_Or_Not();

#endif /* BUTTON_DRIVER_H_ */
