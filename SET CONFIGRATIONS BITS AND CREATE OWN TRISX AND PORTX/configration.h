/* 
 * File:   configration.h
 * Author: Timurleng44
 *
 * Created on 08 Nisan 2022 Cuma, 16:49
 */

#ifndef CONFIGRATION_H
#define	CONFIGRATION_H
    #include <xc.h>
    #define _XTAL_FREQ 4000000
    #define ON 1
    #define OFF 0
    #define OUT 0
    #define INPUT 1
    #define _delay_ 100

    volatile uint8_t *const _my_TRISA =  (uint8_t *const)(0x85);
    volatile uint8_t *const _my_PORTA =  (uint8_t *const)(0x05);

    volatile uint8_t *const _my_TRISB =  (uint8_t *const)(0x86);
    volatile uint8_t *const _my_PORTB =  (uint8_t *const)(0x06);

    volatile uint8_t *const _my_TRISC =  (uint8_t *const)(0x87);
    volatile uint8_t *const _my_PORTC =  (uint8_t *const)(0x07);

    volatile uint8_t *const _my_TRISD =  (uint8_t *const)(0x88);
    volatile uint8_t *const _my_PORTD =  (uint8_t *const)(0x08);

    volatile uint8_t *const _my_TRISE =  (uint8_t *const)(0x89);
    volatile uint8_t *const _my_PORTE =  (uint8_t *const)(0x09);

    #define  my_TRISA *_my_TRISA
    #define  my_PORTA *_my_PORTA
    
    #define  my_TRISB *_my_TRISB
    #define  my_PORTB *_my_PORTB

    #define  my_TRISC *_my_TRISC
    #define  my_PORTC *_my_PORTC

    #define  my_TRISD *_my_TRISD
    #define  my_PORTD *_my_PORTD

    #define  my_TRISE *_my_TRISE
    #define  my_PORTE *_my_PORTE
    
    struct _my_TRISAbits{
    uint8_t TRISA0:1;
    uint8_t TRISA1:1;
    uint8_t TRISA2:1;
    uint8_t TRISA3:1;
    uint8_t TRISA4:1;
    uint8_t TRISA5:1;
    };
    //extern volatile struct _my_TRISAbits* my_TRISAbits = (struct _my_TRISAbits*)(0x85);
    extern volatile struct _my_TRISAbits* my_TRISAbits;// = (struct _my_TRISAbits*)(0x85);
    volatile struct _my_TRISAbits* my_TRISAbits = (struct _my_TRISAbits*)(0x85);

    struct _my_PORTAbits{
    uint8_t PORTA0:1;
    uint8_t PORTA1:1;
    uint8_t PORTA2:1;
    uint8_t PORTA3:1;
    uint8_t PORTA4:1;
    uint8_t PORTA5:1;
    };
    //extern volatile struct _my_PORTAbits* my_PORTAbits = (struct _my_PORTAbits*)(0x05);
    extern volatile struct _my_PORTAbits* my_PORTAbits;// = (struct _my_PORTAbits*)(0x05);
    volatile struct _my_PORTAbits* my_PORTAbits = (struct _my_PORTAbits*)(0x05);
    

    struct _my_TRISBbits{
    uint8_t TRISB0:1;
    uint8_t TRISB1:1;
    uint8_t TRISB2:1;
    uint8_t TRISB3:1;
    uint8_t TRISB4:1;
    uint8_t TRISB5:1;
    uint8_t TRISB6:1;
    uint8_t TRISB7:1;
    };
    //extern volatile struct _my_TRISBbits* my_TRISBbits = (struct _my_TRISBbits*)(0x86);
    extern volatile struct _my_TRISBbits* my_TRISBbits;// = (struct _my_TRISBbits*)(0x86);
    volatile struct _my_TRISBbits* my_TRISBbits = (struct _my_TRISBbits*)(0x86);

    struct _my_PORTBbits{
    uint8_t PORTB0:1;
    uint8_t PORTB1:1;
    uint8_t PORTB2:1;
    uint8_t PORTB3:1;
    uint8_t PORTB4:1;
    uint8_t PORTB5:1;
    uint8_t PORTB6:1;
    uint8_t PORTB7:1;
    };
    //extern volatile struct _my_PORTBbits* my_PORTBbits = (struct _my_PORTBbits*)(0x06);
    extern volatile struct _my_PORTBbits* my_PORTBbits;// = (struct _my_PORTBbits*)(0x06);
    volatile struct _my_PORTBbits* my_PORTBbits = (struct _my_PORTBbits*)(0x06);

    struct _my_TRISCbits{
    uint8_t TRISC0:1;
    uint8_t TRISC1:1;
    uint8_t TRISC2:1;
    uint8_t TRISC3:1;
    uint8_t TRISC4:1;
    uint8_t TRISC5:1;
    uint8_t TRISC6:1;
    uint8_t TRISC7:1;
    };
    //extern volatile struct _my_TRISCbits* my_TRISCbits = (struct _my_TRISCbits*)(0x87);
    extern volatile struct _my_TRISCbits* my_TRISCbits;// = (struct _my_TRISCbits*)(0x87);
    volatile struct _my_TRISCbits* my_TRISCbits = (struct _my_TRISCbits*)(0x87);

    struct _my_PORTCbits{
    uint8_t PORTC0:1;
    uint8_t PORTC1:1;
    uint8_t PORTC2:1;
    uint8_t PORTC3:1;
    uint8_t PORTC4:1;
    uint8_t PORTC5:1;
    uint8_t PORTC6:1;
    uint8_t PORTC7:1;
    };
    //extern volatile struct _my_PORTCbits* my_PORTCbits = (struct _my_PORTCbits*)(0x07);
    extern volatile struct _my_PORTCbits* my_PORTCbits;// = (struct _my_PORTCbits*)(0x07);
    volatile struct _my_PORTCbits* my_PORTCbits = (struct _my_PORTCbits*)(0x07);

    struct _my_TRISDbits{
    uint8_t TRISD0:1;
    uint8_t TRISD1:1;
    uint8_t TRISD2:1;
    uint8_t TRISD3:1;
    uint8_t TRISD4:1;
    uint8_t TRISD5:1;
    uint8_t TRISD6:1;
    uint8_t TRISD7:1;
    };
    //extern volatile struct _my_TRISDbits* my_TRISDbits = (struct _my_TRISDbits*)(0x88);
    extern volatile struct _my_TRISDbits* my_TRISDbits;// = (struct _my_TRISDbits*)(0x88);
    volatile struct _my_TRISDbits* my_TRISDbits = (struct _my_TRISDbits*)(0x88);

    struct _my_PORTDbits{
    uint8_t PORTD0:1;
    uint8_t PORTD1:1;
    uint8_t PORTD2:1;
    uint8_t PORTD3:1;
    uint8_t PORTD4:1;
    uint8_t PORTD5:1;
    uint8_t PORTD6:1;
    uint8_t PORTD7:1;
    };
    //extern volatile struct _my_PORTDbits* my_PORTDbits = (struct _my_PORTDbits*)(0x08);
    extern volatile struct _my_PORTDbits* my_PORTDbits;// = (struct _my_PORTDbits*)(0x08);
    volatile struct _my_PORTDbits* my_PORTDbits = (struct _my_PORTDbits*)(0x08);

    struct _my_TRISEbits{
    uint8_t TRISE0:1;
    uint8_t TRISE1:1;
    uint8_t TRISE2:1;
    };
    //extern volatile struct _my_TRISEbits* my_TRISEbits = (struct _my_TRISEbits*)(0x89);
    extern volatile struct _my_TRISEbits* my_TRISEbits;// = (struct _my_TRISEbits*)(0x89);
    volatile struct _my_TRISEbits* my_TRISEbits = (struct _my_TRISEbits*)(0x89);
    

    struct _my_PORTEbits{
    uint8_t PORTE0:1;
    uint8_t PORTE1:1;
    uint8_t PORTE2:1;
    };
    //extern volatile struct _my_PORTEbits* my_PORTEbits = (struct _my_PORTEbits*)(0x09);
    extern volatile struct _my_PORTEbits* my_PORTEbits;// = (struct _my_PORTEbits*)(0x09);
    volatile struct _my_PORTEbits* my_PORTEbits = (struct _my_PORTEbits*)(0x09);

    
    void init_config_settings(void);
    void set_all_ports(void);
    void flip_flop_func(void);
    void walking_lights_func(void);
    
    
#endif	/* CONFIGRATION_H */

