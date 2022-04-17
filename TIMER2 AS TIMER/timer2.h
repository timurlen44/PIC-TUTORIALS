/* 
 * File:   timer2.h
 * Author: Timurleng44
 *
 * Created on 16 Nisan 2022 Cumartesi, 12:05
 */

#ifndef TIMER2_H
#define	TIMER2_H
#include <xc.h>
#include <stdbool.h>
#include <stdint.h>
#include "configration.h"

#define TIMER2_POSTSCALE_16 15
#define TIMER2_POSTSCALE_15 14 
#define TIMER2_POSTSCALE_14 13
#define TIMER2_POSTSCALE_13 12
#define TIMER2_POSTSCALE_12 11
#define TIMER2_POSTSCALE_11 10
#define TIMER2_POSTSCALE_10 9
#define TIMER2_POSTSCALE_9 8
#define TIMER2_POSTSCALE_8 7
#define TIMER2_POSTSCALE_7 6 
#define TIMER2_POSTSCALE_6 5
#define TIMER2_POSTSCALE_5 4
#define TIMER2_POSTSCALE_4 3
#define TIMER2_POSTSCALE_3 2
#define TIMER2_POSTSCALE_2 1
#define TIMER2_POSTSCALE_1 0

#define GLOBAL_INTERUPT_ENABLE 1
#define GLOBAL_INTERUPT_DISABLE 0

#define PERIPHERAL_INTERUPTS_ENABLE 1
#define PERIPHERAL_INTERUPTS_DISABLE 0

#define ENABLE_TIMER2_INTERRUPT 1
#define DISABLE_TIMER2_INTERRUPT 0

#define TIMER2_PRESCALAR_1 0
#define TIMER2_PRESCALAR_4 1
#define TIMER2_PRESCALAR_16 2 // OR 3

#define RESET_TIMER2_FLAG 0

void ENABLE_TIMER2 (uint8_t PR2_VALUE,uint8_t _TIMER2_INIT_VALUE, uint8_t hardware_prescalar_value, uint16_t _software_prescalar_value, uint8_t POSTSCALE_VALUE, void (*funcptr)(void));

#endif	/* TIMER2_H */

