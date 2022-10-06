/*
 * led.c
 *
 * Created: 2022-09-20 9:42:09 PM
 *  Author: User
 */ 

#include "led.h"

/*functions definition*/

void LED_init(uint8_t LedPort, uint8_t LedPin)
{
    DIO_init(LedPin, LedPort, OUT);
}
void LED_on(uint8_t LedPort, uint8_t LedPin)
{
    DIO_write(LedPin, LedPort, HIGH);
}
void LED_off(uint8_t LedPort, uint8_t LedPin)
{
    DIO_write(LedPin, LedPort, LOW);
}
void LED_toggle(uint8_t LedPort, uint8_t LedPin)
{
	DIO_toggle(LedPin,LedPort);
}