/*
 * button.c
 *
 * Created: 2022-09-20 10:44:55 PM
 *  Author: User
 */ 

#include "button.h"

/*functions definitions*/

void BUTTON_init(uint8_t ButtonPort, uint8_t ButtonPin)
{
    DIO_init(ButtonPin, ButtonPort, IN);
}
void BUTTON_read(uint8_t ButtonPort, uint8_t ButtonPin, uint8_t *value)
{
    DIO_read(ButtonPin, ButtonPort, value);
}