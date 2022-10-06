/*
 * application.h
 *
 * Created: 2022-09-20 10:11:13 PM
 *  Author: User
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "../MCAL/DIO driver/dio.h"
#include "../ECUAL/LED driver/led.h"
#include "../ECUAL/Button driver/button.h"

/*functions prototypes*/
void APP_init(void);
void APP_start(void);

/*MACROS*/
#define Number_of_overflows 2000


#endif /* APPLICATION_H_ */