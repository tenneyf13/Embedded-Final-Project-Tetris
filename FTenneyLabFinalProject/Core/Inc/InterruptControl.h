/*
 * InterruptControl.h
 *
 *  Created on: Sep 28, 2024
 *      Author: francescatenney
 */

#ifndef INTERRUPTCONTROL_H_
#define INTERRUPTCONTROL_H_
#include <stdint.h>
#include "stm32f4xx_hal.h"
#define EXTI0_IRQ_NUMBER 6

void EnableIRQ(uint8_t IRQNumber);
void DisableIRQ(uint8_t IRQNumber);
void ClearPendingIRQ(uint8_t IRQNumber);
void SetPendingIRQ(uint8_t IRQNumber);

void ClearEXTIInterrupt(uint8_t pinNumber);

#endif /* INTERRUPTCONTROL_H_ */
