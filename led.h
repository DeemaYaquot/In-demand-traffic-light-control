/*
 * led.h
 *
 * Created: 2022-09-20 9:42:21 PM
 *  Author: User
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO driver/dio.h"

/*functions prototypes*/
void LED_init(uint8_t LedPort, uint8_t LedPin);
void LED_on(uint8_t LedPort, uint8_t LedPin);
void LED_off(uint8_t LedPort, uint8_t LedPin);
void LED_toggle(uint8_t LedPort, uint8_t LedPin);

#endif /* LED_H_ */