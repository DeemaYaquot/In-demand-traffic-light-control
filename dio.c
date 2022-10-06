/*
 * dio.c
 *
 * Created: 2022-09-20 7:31:18 PM
 *  Author: User
 */ 

#include "dio.h"

/*functions definitions*/
void DIO_init(uint8_t PinNumber, uint8_t PortNumber, uint8_t direction)
{
	switch (PortNumber)
	{
	case 'A':
	         if (direction==IN)
			 {
				 DDRA &= ~(1<<PinNumber);
			 }
			 else if (direction==OUT)
			 {
				 DDRA |= (1<<PinNumber);
			 }
			 else {/*erroe handling technique*/}
		break;
	case 'B':
	         if (direction==IN)
	         {
		         DDRB &= ~(1<<PinNumber);
	         }
	         else if (direction==OUT)
	         {
		         DDRB |= (1<<PinNumber);
	         }
	         else {/*erroe handling technique*/}
	    break;
	case 'C':
	         if (direction==IN)
	         {
		         DDRC &= ~(1<<PinNumber);
	         }
	         else if (direction==OUT)
	         {
		         DDRC |= (1<<PinNumber);
	         }
	         else {/*erroe handling technique*/}
	    break;
	case 'D':
	         if (direction==IN)
	         {
		         DDRD &= ~(1<<PinNumber);
	         }
	         else if (direction==OUT)
	         {
		         DDRD |= (1<<PinNumber);
	         }
	         else {/*erroe handling technique*/}
	    break;
	}
}

void DIO_write(uint8_t PinNumber, uint8_t PortNumber, uint8_t value)
{
	switch (PortNumber)
	{
		case 'A':
		         if (value==LOW)
		         {
		         	PORTA &= ~(1<<PinNumber);
		         }
		         else if (value==HIGH)
		         {
		         	PORTA |= (1<<PinNumber);
		         }
		         else {/*erroe handling technique*/}
		  break;
		case 'B':
		         if (value==LOW)
		         {
		         	PORTB &= ~(1<<PinNumber);
		         }
		         else if (value==HIGH)
		         {
		         	PORTB |= (1<<PinNumber);
	         	}
         		else {/*erroe handling technique*/}
		  break;
		case 'C':
         		if (value==LOW)
         		{
	         		PORTC &= ~(1<<PinNumber);
	         	}
	         	else if (value==HIGH)
	         	{
	         		PORTC |= (1<<PinNumber);
	         	}
	         	else {/*erroe handling technique*/}
		  break;
		case 'D':
		         if (value==LOW)
		         {
		         	PORTD &= ~(1<<PinNumber);
		         }
		         else if (value==HIGH)
		         {
		         	PORTD |= (1<<PinNumber);
	         	 }
		         else {/*erroe handling technique*/}
		  break;
	}
}

void DIO_read(uint8_t PinNumber, uint8_t PortNumber, uint8_t *value)
{
    switch (PortNumber)
    {
        case 'A':
            *value= (PINA & (1<<PinNumber))>>PinNumber;
        break;

        case 'B':
            *value= (PINB & (1<<PinNumber))>>PinNumber;
        break;

        case 'C':
            *value= (PINC & (1<<PinNumber))>>PinNumber;
        break;

        case 'D':
            *value= (PIND & (1<<PinNumber))>>PinNumber;
        break;

        default:
        break;
    }   
}

void DIO_toggle(uint8_t PinNumber, uint8_t PortNumber)
{
	switch (PortNumber)
	{
		case 'A':
		         PORTA ^= (1<<PinNumber);
		  break;
		
		case 'B':
		         PORTB ^= (1<<PinNumber);
	      break;
		
		case 'C':
		         PORTC ^= (1<<PinNumber);
		  break;
				 
		case 'D':
		         PORTD ^= (1<<PinNumber);
		  break;		 
	}
	 
}