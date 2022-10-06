/*
 * GccApplication2.c
 *
 * Created: 2022-09-20 6:59:38 PM
 * Author : User
 */ 

#include "Application/application.h"

int main(void)
{
	/*DIO_init(4, 'D', OUT);
	DIO_init(3, 'C', OUT);
	DIO_init(4, 'B', OUT);
	DIO_init(3, 'B', OUT);*/

    APP_init();
    APP_start();
	/*DIO_write(4, 'D', HIGH);
	DIO_write(3, 'C', LOW);
	DIO_write(4, 'B', HIGH);
	DIO_write(3, 'B', LOW);*/
}

