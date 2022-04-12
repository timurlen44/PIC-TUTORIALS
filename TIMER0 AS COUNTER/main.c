/*
 * File:   main.c
 * Author: Timurleng44
 *
 * Created on 12 Nisan 2022 Salı, 18:40
 */


#include <xc.h>
#include "configration.h"
#include "timer0_counter.h"

void Turn_Led_Statement(void){
    PORTB++;
}
void main(void) {
    TRISB = 0x00;
    PORTB = 0XFA;
    ENABLE_TIMER0_COUNTER(TIMER0_RISING_EDGE,255,DO_NOT_USE_TIMER0_PRESCALAR,DO_NOT_USE_TIMER0_PRESCALAR2,Turn_Led_Statement);
    while(TRUE){
        __delay_ms(100);
    }
    return;
}
