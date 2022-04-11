#include "rb_interrupt_configration.h"
void ENABLE_RB_PORT_CHANGE_INTERRUPT(void){
    INTCONbits.GIE = 1;
    INTCONbits.RBIE = 1;
}
void __interrupt()PORTB_INTERRUPT_FUNC(){
    if(INTCONbits.RBIF && PORTBbits.RB4){
        PORTCbits.RC0 = !PORTCbits.RC0;
    }
    else if(INTCONbits.RBIF && PORTBbits.RB5){
        PORTCbits.RC1 = !PORTCbits.RC1;
    }
    else if(INTCONbits.RBIF && PORTBbits.RB6){
        PORTCbits.RC2 = !PORTCbits.RC2;
    }
    else if(INTCONbits.RBIF && PORTBbits.RB7){
        PORTCbits.RC3 = !PORTCbits.RC3;
    }
    INTCONbits.RBIF = 0;
    
}

