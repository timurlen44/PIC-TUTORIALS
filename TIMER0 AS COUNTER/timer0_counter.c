#include "timer0_counter.h"

uint8_t TIMER0_INIT_VALUE;
uint16_t prescalar2;
void (*_funcptr)(void);
void __interrupt() TIMER0_AS_TIMER_INTERRUPT(){
    static uint16_t _prescalar2= 0;
    if(INTCONbits.TMR0IF && _prescalar2 == prescalar2){
        _prescalar2 = 0;
        _funcptr();
    }
    else{
        _prescalar2++;
    }
    TMR0 = TIMER0_INIT_VALUE;
    INTCONbits.TMR0IF = 0;//Flag Must Reset.
}
void ENABLE_TIMER0_COUNTER(bool SELECTED_EDGE,uint8_t _TIMER0_INIT_VALUE,uint8_t prescalar_value,uint16_t _prescalar2, void (*funcptr)(void)){
    PORTAbits.RA4 = INPUT;
    _funcptr = funcptr;
    INTCONbits.GIE = 1;
    INTCONbits.TMR0IE = 1;
    OPTION_REGbits.T0CS = 1;// TOCS = 0 => TIMER / TOCS = 1 COUNTER (RA4)
    if(prescalar_value == 8){
        prescalar2 = 0;
        OPTION_REGbits.PSA = 1;
        OPTION_REGbits.PS0 = 0;
        OPTION_REGbits.PS1 = 0;
        OPTION_REGbits.PS2 = 0;
    }
    else{
    
    OPTION_REGbits.PSA = 1;// PSA = 0 => TIMER0 USE PRESCALAR ASSIGMENT BIT/ PSA = 1 => WDT USE PRESCALAR ASSIGMENT BIT
    OPTION_REGbits.PS0 = prescalar_value & 1; 
    OPTION_REGbits.PS1 = prescalar_value & 2;
    OPTION_REGbits.PS2 = prescalar_value & 4;
    OPTION_REG |= prescalar_value;
    /*
        7 = 0b111 => prescalar value = 1/256
        6 = 0b110 => prescalar value = 1/128
        5 = 0b101 => prescalar value = 1/64
        4 = 0b100 => prescalar value = 1/32
        3 = 0b100 => prescalar value = 1/16
        2 = 0b010 => prescalar value = 1/8
        1 = 0b001 => prescalar value = 1/4
        0 = 0b000 => prescalar value = 1/2
    */
    prescalar2 = _prescalar2;    
    }
    OPTION_REGbits.T0SE = SELECTED_EDGE;
    TIMER0_INIT_VALUE = _TIMER0_INIT_VALUE;
    TMR0 = TIMER0_INIT_VALUE;
    
}

