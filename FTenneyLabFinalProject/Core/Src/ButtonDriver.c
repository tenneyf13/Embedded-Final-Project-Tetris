/*
 * Button_Driver.c
 *
 *  Created on: Sep 24, 2024
 *      Author: francescatenney
 */
#include "ButtonDriver.h"

/*void Button_Init(){
	GPIO_PinConfig_t GPIOButtonConfig = {0};

    GPIOButtonConfig.PinInterrupt = FALLING_AND_RISING_EDGE_INTERRUPT;

    GPIO_Init(GPIOA, GPIOButtonConfig); //will also config the interrupts too.
    HAL_GPIO_Init(GPIOA, GPIO_Init);

}*/

void Button_Interrupt_Init(){
	GPIO_InitTypeDef GPIOButtonConfig = {0};

    GPIOButtonConfig.Mode = GPIO_MODE_IT_RISING_FALLING;
    GPIOButtonConfig.Pin = GPIO_PIN_0;
    HAL_NVIC_EnableIRQ(EXTI0_IRQn);
    HAL_GPIO_Init(GPIOA, &GPIOButtonConfig);
}

bool Button_Pressed_Or_Not(){
	uint8_t Pressed_Or_Not = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0);
	if(Pressed_Or_Not == BUTTON_PRESSED){
		    return true;
	}
	else{
			return false;
		}

}

