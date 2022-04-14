/*
 * File:   main.c
 * Author: Timurleng44
 *
 * Created on 14 Nisan 2022 Perşembe, 15:11
 */


#include <xc.h>
#include "configration.h"
#include "timer1.h"

void Turn_Led_Statement(void){
    PORTBbits.RB0 = !PORTBbits.RB0;
}
void main(void) {
    TRISB = 0x00;
    PORTB = 0X00;
    ENABLE_TIMER1(TIMER1_INTERNAL_CLOCK,3035,TIMER1_1_PRESCALAR,8,Turn_Led_Statement);// 2 Seconds // TIMER1_INTERNAL_CLOCK == TIMER1 AS TIMER
    while(TRUE){
        PORTBbits.RB7 = !PORTBbits.RB7;
        __delay_ms(100);
    }
    return;
}
