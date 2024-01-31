/*
 * relay.h
 *
 * Created: 11/01/2024 01:56:32 م
 *  Author: AMR MOSTAFA
 */ 


#ifndef RELAY_H_
#define RELAY_H_

void relay_innitialize(unsigned char portname, unsigned char pinnumber);
void relay_turn_on(unsigned char portname, unsigned char pinnumber);
void relay_turn_off(unsigned char portname, unsigned char pinnumber);

#endif /* RELAY_H_ */