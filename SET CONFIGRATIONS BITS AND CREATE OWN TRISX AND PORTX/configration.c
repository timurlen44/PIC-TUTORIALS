/*
 * File:   configration.c
 * Author: Timurleng44
 *
 * Created on 08 Nisan 2022 Cuma, 16:49
 */


#include "configration.h"


void init_config_settings(void){
    #pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
    #pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
    #pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
    #pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
    #pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
    #pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
    #pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control) 
    #pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)}
}

void set_all_ports(void){
    my_TRISA = 0X00;
    my_TRISB = 0X00;
    my_TRISC = 0X00;
    my_TRISD = 0X00;
    my_TRISE = 0X00;
    
    my_PORTA = 0x00;
    my_PORTB = 0x00;
    my_PORTC = 0x00;
    my_PORTD = 0x00;
    my_PORTE = 0x00;
}
void flip_flop_func(void){
    my_PORTA = 0xFF;
    my_PORTB = 0xFF;
    my_PORTC = 0xFF;
    my_PORTD = 0xFF;
    my_PORTE = 0xFF;
    __delay_ms(_delay_);
    my_PORTA = 0x00;
    my_PORTB = 0x00;
    my_PORTC = 0x00;
    my_PORTD = 0x00;
    my_PORTE = 0x00;
    __delay_ms(_delay_);
    
}



void walking_lights_func(void){
    my_PORTD = 0XFF;
    my_PORTCbits->PORTC7 = ON;
    my_PORTBbits->PORTB0 = ON;
    __delay_ms(_delay_);
    my_PORTD = 0X00;
    my_PORTCbits->PORTC6 = ON;
    my_PORTBbits->PORTB1 = ON;
    __delay_ms(_delay_);
    my_PORTD = 0XFF;
    my_PORTCbits->PORTC5 = ON;
    my_PORTBbits->PORTB2 = ON;
    __delay_ms(_delay_);
    my_PORTD = 0X00;
    my_PORTCbits->PORTC4 = ON;
    my_PORTBbits->PORTB3 = ON;
    __delay_ms(_delay_);
    my_PORTD = 0XFF;
    my_PORTCbits->PORTC3 = ON;
    my_PORTBbits->PORTB4 = ON;
    __delay_ms(_delay_);
    my_PORTD = 0X00;
    my_PORTCbits->PORTC2 = ON;
    my_PORTBbits->PORTB5 = ON;
    __delay_ms(_delay_);
    my_PORTD = 0XFF;
    my_PORTCbits->PORTC1 = ON;
    my_PORTBbits->PORTB6 = ON;
    __delay_ms(_delay_);
    my_PORTD = 0X00;
    my_PORTCbits->PORTC0 = ON;
    my_PORTBbits->PORTB7 = ON;
    __delay_ms(_delay_);
    my_PORTD = 0XFF;
    my_PORTCbits->PORTC0 = OFF;
    my_PORTBbits->PORTB7 = OFF;
    __delay_ms(_delay_);
    my_PORTD = 0X00;
    my_PORTCbits->PORTC1 = OFF;
    my_PORTBbits->PORTB6 = OFF;
    __delay_ms(_delay_);
    my_PORTD = 0XFF;
    my_PORTCbits->PORTC2 = OFF;
    my_PORTBbits->PORTB5 = OFF;
    __delay_ms(_delay_);
    my_PORTD = 0X00;
    my_PORTCbits->PORTC3 = OFF;
    my_PORTBbits->PORTB4 = OFF;
    __delay_ms(_delay_);
    my_PORTD = 0XFF;
    my_PORTCbits->PORTC4 = OFF;
    my_PORTBbits->PORTB3 = OFF;
    __delay_ms(_delay_);
    my_PORTD = 0X00;
    my_PORTCbits->PORTC5 = OFF;
    my_PORTBbits->PORTB2 = OFF;
    __delay_ms(_delay_);
    my_PORTD = 0XFF;
    my_PORTCbits->PORTC6 = OFF;
    my_PORTBbits->PORTB1 = OFF;
    __delay_ms(_delay_);
    my_PORTD = 0X00;
    my_PORTCbits->PORTC7 = OFF;
    my_PORTBbits->PORTB0 = OFF;
    __delay_ms(_delay_);
    return;
}