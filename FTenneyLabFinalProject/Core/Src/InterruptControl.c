/*
 * InterruptControl.c
 *
 *  Created on: Sep 28, 2024
 *      Author: francescatenney
 */


#include "InterruptControl.h"

/*void EnableIRQ(uint8_t IRQNumber){
	if(IRQNumber < 32){
		*NVIC_ISER0 = (0x1 << IRQNumber);
	}
	if(IRQNumber >= 32){
		*NVIC_ISER0 = (0x1 << (IRQNumber%32));
	}
}
void DisableIRQ(uint8_t IRQNumber){
	if(IRQNumber < 32){
		*NVIC_ICER0 = (0x1 << IRQNumber);
	}
	if(IRQNumber >= 32){
		*NVIC_ICER0 = (0x1 << (IRQNumber%32));
	}
}
void ClearPendingIRQ(uint8_t IRQNumber){
	if(IRQNumber < 32){
			 *NVIC_ICPR0 = (0x1 << IRQNumber);
		}
		if(IRQNumber >= 32){
			 *NVIC_ICPR0 = (0x1 << (IRQNumber%32));
		}
}
void SetPendingIRQ(uint8_t IRQNumber){
	if(IRQNumber < 32){
			*NVIC_ISPR0 = (0x1 << IRQNumber);
	}
	if(IRQNumber >= 32){
			*NVIC_ISPR0 = (0x1 << (IRQNumber%32));
	}
}*/

void ClearEXTIInterrupt(uint8_t pinNumber){
	EXTI->PR |= (0x1 << pinNumber);
}
