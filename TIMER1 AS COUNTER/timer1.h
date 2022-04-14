/* 
 * File:   timer1.h
 * Author: Timurleng44
 *
 * Created on 14 Nisan 2022 Perşembe, 16:50
 */


#ifndef TIMER1_H
#define	TIMER1_H

#include <xc.h>
#include <stdbool.h>
#include <stdint.h>
#include "configration.h"
#define TIMER1_RISING_EDGE 0
#define TIMER1_FALLING_EDGE 1
#define GLOBAL_INTERUPT_ENABLE 1
#define GLOBAL_INTERUPT_DISABLE 0
#define TIMER1_INTERUPT_ENABLE 1
#define TIMER1_INTERUPT_DISABLE 0
#define TIMER1_EXTERNAL_CLOCK 1 // RC0/T1OSO/T1CKI
#define TIMER1_INTERNAL_CLOCK 0 // Fosc/4
#define TIMER1_1_PRESCALAR 0 // 1:1 PRESCALAR
#define TIMER1_2_PRESCALAR 1 // 1:2 PRESCALAR
#define TIMER1_4_PRESCALAR 2 // 1:4 PRESCALAR
#define TIMER1_8_PRESCALAR 3 // 1:8 PRESCALAR
#define RESET_TIMER1_FLAG 0
#define PERIPHERAL_INTERUPTS_ENABLE 1
#define PERIPHERAL_INTERUPTS_DISABLE 0
#define DO_NOT_USE_TIMER1_PRESCALAR 8
#define DO_NOT_USE_TIMER1_PRESCALAR2 0
void ENABLE_TIMER1(bool TIMER1_CLOCK_SOURCE,uint16_t _TIMER1_INIT_VALUE,uint8_t hardware_prescalar_value,uint16_t _software_prescalar_value, void (*funcptr)(void));

#endif	/* TIMER1_H */

