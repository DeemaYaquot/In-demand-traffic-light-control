/*
 * dio.h
 *
 * Created: 2022-09-20 7:31:32 PM
 *  Author: User
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../Utilities/types.h"
#include "../../Utilities/registers.h"
/*direction MACROS*/
#define IN 0
#define OUT 1

/*value MACROS*/
#define LOW 0
#define HIGH 1

/*functions prototypes*/
void DIO_init(uint8_t PinNumber, uint8_t PortNumber, uint8_t direction);
void DIO_write(uint8_t PinNumber, uint8_t PortNumber, uint8_t value);
void DIO_toggle(uint8_t PinNumber, uint8_t PortNumber);
void DIO_read(uint8_t PinNumber, uint8_t PortNumber, uint8_t *value);





#endif /* DIO_H_ */