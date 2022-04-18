/*
 * File:   receiver.c
 * Author: Timurleng44
 *
 * Created on 19 Nisan 2022 Salı, 01:49
 */


#include <xc.h>
#include "configration.h"
#include "uart.h"

#define LED1 PORTDbits.RD3
#define LED2 PORTDbits.RD2
#define LED3 PORTDbits.RD1
#define LED4 PORTDbits.RD0

uint8_t data;
void main(void) {
    TRISD = 0x00;
    PORTD = 0x00;
    UART_Init(9600);
    while(TRUE){
        if(UART_Data_Ready())
        {
           data = UART_Read();
           if(data == '1'){
               LED1 = HIGH;
           }
           else if(data == '2'){
               LED2 = HIGH;
           }
           else if(data == '3'){
               LED3 = HIGH;
           }
           else if(data == '4'){
               LED4 = HIGH;
           }
           else if(data == '0'){
               PORTD= 0x00;
           }

       }
    }
    return;
}