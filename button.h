/*
 * button.h
 *
 * Created: 2022-09-20 10:45:10 PM
 *  Author: User
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO driver/dio.h"

/*define MACROS*/
#define LOW 0
#define HIGH 1

/*functions prototypes*/
void BUTTON_init(uint8_t ButtonPort, uint8_t ButtonPin);
void BUTTON_read(uint8_t ButtonPort, uint8_t ButtonPin, uint8_t *value);


#endif /* BUTTON_H_ */