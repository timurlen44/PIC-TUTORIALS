#include "interrupt_configration.h"
void __interrupt() RB0_INTERRUPT_FUNC(){
    if(INTCONbits.INTF == 1){//INTF =  RB0/INT External Interrupt Flag bi
        PORTCbits.RC7 = !PORTCbits.RC7;
    }
    INTCONbits.INTF = 0;//interrupt flagini resetledim çünkü resetlemessem bir daha interrupt oluşamaz.
}
void ENABLE_RB0_EXTERNAL_INTERRUPT(bool EDGE){
    INTCONbits.GIE  = 1;//GIE = Global Interrupt Enable bit
    INTCONbits.INTE = 1;//INTE = RB0/INT External Interrupt Enable bit
    OPTION_REGbits.INTEDG = EDGE;//INTEDG = Interrupt Edge Select bit//1 = YÜKSELEN KENAR KESMESİ // 0 = DÜŞEN KENAR KESMESİ
}
