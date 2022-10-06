/*
 * application.c
 *
 * Created: 2022-09-20 10:11:01 PM
 *  Author: User
 */ 

#include "application.h"

unsigned int overflowCounter = 0;

/*functions definition*/
void APP_init(void)
{
     LED_init('A', 4);
     LED_init('B', 3);
     BUTTON_init('C', 1);
	 LED_init('D', 4);
	 TCCR0 = 0x00;
	 TCNT0 = 0x00;
}
void APP_start(void)
{
	while(1)
	{
		/*uint8_t buttonstate = 0;
        LED_on('B', 3);
        BUTTON_read('C', 1, &buttonstate);
        if (buttonstate==HIGH)
        {
             LED_on('A', 4);
        }
        else if (buttonstate==LOW)
        {
             LED_off('A', 4);
        }*/
	    LED_toggle('D', 4);
	    /*timer start*/
	    TCCR0 |= (1<<0);
	
	    while (overflowCounter < Number_of_overflows)
	    {
	    	/*busy wait for overflow*/
		    while((TIFR & (1<<0)) == 0);
		    /*clear overflow flag*/
		    TIFR |= (1<<0);
		
		    overflowCounter++;
    	}
	    overflowCounter=0;
	
	    /*timer  stop by setting to zero to start over from 0*/
	    TCCR0 = 0x00;
	}
}