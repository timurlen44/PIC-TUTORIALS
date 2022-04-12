/* 
 * File:   timer0_timer.h
 * Author: Timurleng44
 *
 * Created on 12 Nisan 2022 Salı, 13:43
 */

#ifndef TIMER0_TIMER_H
#define	TIMER0_TIMER_H
#include <xc.h>
#include <stdbool.h>
#include <stdint.h>
#define TIMER0_RISING_EDGE 0
#define TIMER0_FALLING_EDGE 1
void __interrupt() TIMER0_AS_TIMER_INTERRUPT();
void ENABLE_TIMER0_TIMER(bool SELECTED_EDGE,uint8_t _TIMER0_INIT_VALUE,uint8_t prescalar_value,uint16_t _prescalar2, void (*funcptr)(void));
#endif	/* TIMER0_TIMER_H */

