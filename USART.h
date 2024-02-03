/*
 * USART.h
 *
 * Created: 02/02/2024 12:47:49 ص
 *  Author: AMR MOSTAFA
 */ 


#ifndef USART_H_
#define USART_H_
#include <avr/io.h>
#include "std_macros.h"

void USART_Initialize(unsigned long baud);
void USART_send_char(unsigned char data);
unsigned char USART_receive(void );
void USART_send_string(unsigned char *data);




#endif /* USART_H_ */