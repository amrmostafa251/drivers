/*
 * timer.c
 *
 * Created: 26/01/2024 12:09:58 ص
 *  Author: Almodather
 */ 
#include "timer.h"
void timer0_ctc_mode_with_interrupt()
{
	/* select CTC mode*/
	SET_BIT(TCCR0,WGM01);
	/* load a value in OCR0 */
	OCR0=32;
	/* select timer clock */
	CLR_BIT(TCCR0,CS00);
	CLR_BIT(TCCR0,CS01);
	SET_BIT(TCCR0,CS02);
	/* enable interrupt*/
	sei();
	SET_BIT(TIMSK,OCIE0);

	
	
}
void timer0_ctc_mode_outputwaveform()
{
	DIO_SET_PIN_DIRECTION('b',3,1);
	/* select CTC mode*/
	SET_BIT(TCCR0,WGM01);
	/* load a value in OCR0 */
	OCR0=6;
	/* select timer clock */
	SET_BIT(TCCR0,CS02);
	//set OC0 mode
	SET_BIT(TCCR0,COM00);
}
void timer2_OV_mode_external_clock_with_interrupt(void)
{
	//SET OUTPUT CLOCK SOURCE 
	SET_BIT(ASSR,AS2);
	//SET_PRESCALER
	SET_BIT(TCCR2,CS22);
	SET_BIT(TCCR2,CS20);
	// SET THE INTERRUPT 
	SET_BIT(TIMSK,TOIE2);
	sei();
}