/*
 * File:   main.c
 * Author: Timurleng44
 *
 * Created on 11 Nisan 2022 Pazartesi, 17:10
 */


#include "configration.h"
#include "interrupt_configration.h"


void main(void) {
    TRISBbits.TRISB0 = INPUT;
    TRISCbits.TRISC0 = OUTPUT;
    TRISCbits.TRISC7 = OUTPUT;
    PORTC = 0X00;
    ENABLE_RB0_EXTERNAL_INTERRUPT(RISING);
    while(TRUE){
        PORTCbits.RC0 = !PORTCbits.RC0;
        __delay_ms(wait_time);
    }
    return;
}
