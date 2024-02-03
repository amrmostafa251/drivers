/*
 * USART.c
 *
 * Created: 02/02/2024 12:47:35 ص
 *  Author: AMR MOSTAFA
 */ 
#include "USART.h"
#define F_CPU 8000000UL
#include <util/delay.h>
void USART_Initialize(unsigned long baud)
{
	//set the baud rate 
	unsigned long ubrr;
	ubrr= F_CPU /(10*(baud+1));
	UBRRH=ubrr>>8;
	UBRRL=ubrr;
	//enable receiver and transmitter
	SET_BIT(UCSRB,RXEN);
	SET_BIT(UCSRB,TXEN);
	//set the charcter size
	UCSRC =(1>>UCSZ1)|(1>>UCSZ0)|(1>>URSEL);
}
void USART_send_char(unsigned char data)
{
	while (READ_BIT(UCSRA,UDRE)==0);
	UDR =data;
}
unsigned char USART_receive(void )
{
	while (READ_BIT(UCSRA,RXC)==0);
	return UDR;
}
void USART_send_string(unsigned char *data)
{
	while (*data!=0)
	{
		USART_send_char(*data);
		data++;
		_delay_ms(100);
	}
}
