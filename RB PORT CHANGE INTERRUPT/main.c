
#include "configration.h"
#include "rb_interrupt_configration.h"
void main(void){
    TRISB = 0XFF;
    TRISC = 0X00;
    PORTC = 0X00;
    ENABLE_RB_PORT_CHANGE_INTERRUPT();
    while(1){
        PORTCbits.RC4 = !PORTCbits.RC4;
        __delay_ms(wait_time);
    }
    return;
}
