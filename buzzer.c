/*
 * buzzer.c
 *
 * Created: 31/12/2023 08:40:23 م
 *  Author: AMR MOSTAFA
 */ 
#include "DIO.h"
#include "buzzed.h"
void buzzer_initialize(unsigned char portname,unsigned char pinnumber)
{
	DIO_SET_PIN_DIRECTION(portname,pinnumber,1);
}
void buzzer_turn_on(unsigned char portname , unsigned char pinnumber )
{
	DIO_WRITE(portname, pinnumber ,1 );
} 
void buzzer_turn_off(unsigned char portname,unsigned char pinnumber)
{
	DIO_WRITE(portname,pinnumber ,0 );
}
void buzzer_toggle(unsigned char portname,unsigned char  pinnumber)
{
	DIO_TOGGLE(portname,pinnumber);	
}