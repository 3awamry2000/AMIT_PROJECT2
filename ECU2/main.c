/*
 * main.c
 *
 *  Created on: Jan 2, 2021
 *      Author: Ahmed
 */
#include "Dio_Reg.h"
#include "Utilities.h"
#include "SPI.h"
void main(void)
{
	SPI_InitSlave();
	Dio_SetPinDirection(GroupC,PIN2,OUTPUT);
	Dio_SetPinDirection(GroupC,PIN7,OUTPUT);
	while(1)
	{
		switch(SPI_RecieveByte())
		{
		case('f'):SET_BIT(PORTC,2);break;
		case('s'):TOG_bIT(PORTC,7);break;
		}
	}
}

