/*
 * File:   sender.c
 * Author: Timurleng44
 *
 * Created on 19 Nisan 2022 Salı, 02:09
 */


#include <xc.h>
#include "configration.h"
#include "uart.h"

#define BUTTON1 PORTBbits.RB0
#define BUTTON2 PORTBbits.RB1
#define BUTTON3 PORTBbits.RB2
#define BUTTON4 PORTBbits.RB3

void main(void) {
    TRISB = 0xFF;
    UART_Init(9600);
    while(TRUE){
        if(BUTTON4 == LOW){
            UART_Write('4');
            while(BUTTON4 == LOW);
            UART_Write('0');
        }
        if(BUTTON3 == LOW){
            UART_Write('3');
            while(BUTTON3 == LOW);
            UART_Write('0');
        }
        if(BUTTON2 == LOW){
            UART_Write('2');
            while(BUTTON2 == LOW);
            UART_Write('0');
        }
        if(BUTTON1 == LOW){
            UART_Write('1');
            while(BUTTON1 == LOW);
            UART_Write('0');
        }
    }
    return;
}
