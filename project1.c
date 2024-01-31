/*
 * project1.c
 *
 * Created: 26/12/2023 09:02:40 ص
 *  Author: AMR MOSTAFA
 */ 

#include "7_segment.h"
#include "button.h"
#include "interrupt.h"
#include <avr/interrupt.h>
#include "led.h"
#include <avr/io.h>
#define F_CPU 8000000UL
#include<util/delay.h>
int main(void)
{
	led_initiaize('D',7);  // intialize led
	button_initialize('D',2);  // initialize button
	global_interrupt_enable();
	INT0_enable(1,1);
while(1)
{
	led_turn_off('D',7); // dim the led
}
}
ISR(INT0_vect)
{
led_turn_on('D',7); // light up the led
_delay_ms(100);  //delay 1 sec
}
