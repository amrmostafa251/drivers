﻿/*
 * timer.h
 *
 * Created: 26/01/2024 12:10:11 ص
 *  Author: Almodather
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "std_macros.h"
#include "DIO.h"
#include <avr/io.h>
#include <avr/interrupt.h>
void timer0_ctc_mode_with_interrupt(void);
void timer0_ctc_mode_outputwaveform(void);
void timer2_OV_mode_external_clock_with_interrupt(void);



#endif /* TIMER_H_ */