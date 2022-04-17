#include "timer2.h"

volatile uint8_t TIMER2_INIT_VALUE;
volatile uint16_t software_prescalar_value;
void (*_funcptr)(void);
void __interrupt() TIMER2_INTERRUPT(){
    static uint16_t prescalar= 0;
    if(PIR1bits.TMR2IF == 1){
        PIR1bits.TMR2IF = RESET_TIMER2_FLAG;
        if(prescalar == software_prescalar_value ){
            prescalar = 0;
            _funcptr();
        }
        else{
            prescalar++;
        }
    }
    
}
void ENABLE_TIMER2(uint8_t PR2_VALUE ,uint8_t _TIMER2_INIT_VALUE,uint8_t hardware_prescalar_value,uint16_t _software_prescalar_value,uint8_t POSTSCALE_VALUE, void (*funcptr)(void)){
    _funcptr = funcptr;
    
    INTCONbits.GIE = GLOBAL_INTERUPT_ENABLE;
    INTCONbits.PEIE = PERIPHERAL_INTERUPTS_ENABLE;
    PIE1bits.TMR2IE = ENABLE_TIMER2_INTERRUPT;
    T2CONbits.TMR2ON = ENABLE_TIMER2_INTERRUPT;
    T2CONbits.TOUTPS = POSTSCALE_VALUE;
    T2CONbits.T2CKPS = hardware_prescalar_value;
    //PIR1bits.TMR2IF = RESET_TIMER2_FLAG;
    PR2 = PR2_VALUE;
    software_prescalar_value = _software_prescalar_value; 
    TIMER2_INIT_VALUE = _TIMER2_INIT_VALUE;
    
}



