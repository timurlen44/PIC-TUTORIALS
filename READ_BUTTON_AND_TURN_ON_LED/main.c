/*
 * File:   main.c
 * Author: Timurleng44
 *
 * Created on 11 Nisan 2022 Pazartesi, 15:13
 */


#include <xc.h>
#include "configration.h"

void main(void) {
    CMCON  |= 7;//CMCON  = 0b00000111;//karşılaştırıcı kapatılıyor
    ADCON1 |= 7;//ADCON1 = 0b00000111;//Analog dijital converter çalışmıyor tüm A portu dijital oluyor Ü
    TRISAbits.TRISA0 = INPUT;
    TRISBbits.TRISB0 = OUTPUT;
    while(TRUE){
        if(PORTAbits.RA0 == HIGH){
            PORTBbits.RB0=HIGH;
        }
        else{
            PORTBbits.RB0=LOW;
        }
            
    }
    return;
}
