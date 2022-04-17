/*
 * File:   main.c
 * Author: Timurleng44
 *
 * Created on 18 Nisan 2022 Pazartesi, 00:06
 */


#include <xc.h>
#include "configration.h"
#include "timer2.h"
uint8_t digit[10]={0x3F, 0X06, 0X5B, 0X4F, 0X66, 0X6D, 0X7C, 0X07, 0X7F, 0X6F};

void change_number(void){
    static int num = 0;
    PORTB = digit[num];
    num++;
    if(num == 10){
        num = 0;
    }
}
void main(void) {
    TRISB = 0x00;
    PORTB = 0X00;
    ENABLE_TIMER2(100,255,TIMER2_PRESCALAR_1,500,TIMER2_POSTSCALE_16,change_number);// 2 seconds
    while(TRUE){
        __delay_ms(100);
    }
    return;
}

