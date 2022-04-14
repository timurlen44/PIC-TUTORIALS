/*
 * File:   main.c
 * Author: Timurleng44
 *
 * Created on 14 Nisan 2022 Perşembe, 16:51
 */


#include <xc.h>
#include "configration.h"
#include "timer1.h"

void Turn_Led_Statement(void){
    PORTB++;
}
void main(void) {
    TRISB = 0x00;
    PORTB = 0XFA;
    ENABLE_TIMER1(TIMER1_EXTERNAL_CLOCK,65535,TIMER1_1_PRESCALAR,1,Turn_Led_Statement);//TIMER1_EXTERNAL_CLOCK == TIMER1 AS COUNTER
    while(TRUE){
        __delay_ms(100);
    }
    return;
}
