/*
 * File:   main.c
 * Author: Timurleng44
 *
 * Created on 12 Nisan 2022 Salı, 13:43
 */

#include "configration.h"
#include "timer0_timer.h"
void Turn_Led_Statement(void){
    PORTCbits.RC7 = !PORTCbits.RC7;
}
void main(void) {
    TRISC = 0x00;
    PORTC = 0X00;
    ENABLE_TIMER0_TIMER(TIMER0_RISING_EDGE,0,7,7813,Turn_Led_Statement);
    while(TRUE){
        PORTCbits.RC0 = !PORTCbits.RC0;
        __delay_ms(500);
    }
    return;
}
