/* 
 * File:   configration.h
 * Author: Timurleng44
 *
 * Created on 12 Nisan 2022 Salı, 18:37
 */

#ifndef CONFIGRATION_H
#define	CONFIGRATION_H
#include <xc.h>
#define _XTAL_FREQ 4000000
#define HIGH 1
#define LOW 0
#define OUTPUT 0
#define INPUT 1
#define TRUE 1
#define FALSE 0
#define wait_time 100

#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control) 
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)}
#endif	/* CONFIGRATION_H */

