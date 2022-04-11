/* 
 * File:   interrupt_configration.h
 * Author: Timurleng44
 *
 * Created on 11 Nisan 2022 Pazartesi, 17:39
 */

#ifndef INTERRUPT_CONFIGRATION_H
#define	INTERRUPT_CONFIGRATION_H
#include <xc.h>
#include <stdbool.h>
#define RISING 1
#define FALLING 0
void ENABLE_RB0_EXTERNAL_INTERRUPT(bool EDGE);
#endif	/* INTERRUPT_CONFIGRATION_H */

