/* 
 * File:   timer0_counter.h
 * Author: Timurleng44
 *
 * Created on 12 Nisan 2022 Salı, 18:38
 */

#ifndef TIMER0_COUNTER_H
#define	TIMER0_COUNTER_H

#include <xc.h>
#include <stdbool.h>
#include <stdint.h>
#include "configration.h"
#define TIMER0_RISING_EDGE 0
#define TIMER0_FALLING_EDGE 1
#define DO_NOT_USE_TIMER0_PRESCALAR 8
#define DO_NOT_USE_TIMER0_PRESCALAR2 0
void __interrupt() TIMER0_AS_TIMER_INTERRUPT();
void ENABLE_TIMER0_COUNTER(bool SELECTED_EDGE,uint8_t _TIMER0_INIT_VALUE,uint8_t prescalar_value,uint16_t _prescalar2, void (*funcptr)(void));

#endif	/* TIMER0_COUNTER_H */

