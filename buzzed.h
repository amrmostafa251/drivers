/*
 * buzzed.h
 *
 * Created: 31/12/2023 08:40:37 م
 *  Author: AMR MOSTAFA
 */ 


#ifndef BUZZED_H_
#define BUZZED_H_
void buzzer_initialize(unsigned char portname,unsigned char  portnumber);
void buzzer_turn_on(unsigned char portname,unsigned char  portnumber);
void buzzer_turn_off(unsigned char portname,unsigned char  portnumber);
void buzzer_toggle(unsigned char portname,unsigned char  portnumber);
#endif /* BUZZED_H_ */