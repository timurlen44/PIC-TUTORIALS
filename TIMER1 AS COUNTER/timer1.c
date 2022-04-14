#include "timer1.h"

volatile uint16_t TIMER1_INIT_VALUE;
volatile uint16_t software_prescalar_value;
void (*_funcptr)(void);
void __interrupt() TIMER1_INTERRUPT(){
    static uint16_t prescalar= 0;
    if(prescalar == software_prescalar_value ){
        prescalar = 0;
        _funcptr();
    }
    else{
        prescalar++;
    }
    TMR1 = TIMER1_INIT_VALUE;
    PIR1bits.TMR1IF = RESET_TIMER1_FLAG;
}
void ENABLE_TIMER1(bool TIMER1_CLOCK_SOURCE,uint16_t _TIMER1_INIT_VALUE,uint8_t hardware_prescalar_value,uint16_t _software_prescalar_value, void (*funcptr)(void)){
    PORTAbits.RA4 = INPUT;
    _funcptr = funcptr;
    INTCONbits.GIE = GLOBAL_INTERUPT_ENABLE;
    INTCONbits.PEIE = PERIPHERAL_INTERUPTS_ENABLE;
    PIE1bits.TMR1IE = TIMER1_INTERUPT_ENABLE;
    T1CONbits.TMR1ON = TIMER1_INTERUPT_ENABLE;
    T1CONbits.TMR1CS = TIMER1_CLOCK_SOURCE;//TIMER1 CLOCK SOURCE SELECT BITS
    if(TIMER1_CLOCK_SOURCE == TIMER1_EXTERNAL_CLOCK){
        TRISCbits.TRISC0 = INPUT;
    }
    
    /*
    bit 5-4 T1CKPS1:T1CKPS0: Timer1 Input Clock Prescale Select bits
    11 = 1:8 prescale value
    10 = 1:4 prescale value
    01 = 1:2 prescale value
    00 = 1:1 prescale value
   */
    T1CONbits.T1CKPS = hardware_prescalar_value;//TIMER 1 PRESCALAR BITS
    TIMER1_INIT_VALUE = _TIMER1_INIT_VALUE;
    TMR1 = _TIMER1_INIT_VALUE;
    software_prescalar_value = _software_prescalar_value;    
    
}
