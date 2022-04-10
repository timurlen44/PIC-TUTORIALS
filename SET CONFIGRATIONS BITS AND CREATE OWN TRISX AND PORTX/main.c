/*
 * File:   main.c
 * Author: Timurleng44
 *
 * Created on 09 Nisan 2022 Cuma, 15:00
 */

#include "configration.h"

    
void main(void) {
    init_config_settings();
    set_all_ports();
    volatile int c = 0;
    while(1){
        for (c = 0;c<2;c++){
            flip_flop_func();
        }
        for (c = 0;c<2;c++){
            walking_lights_func();
        }
    }
    return;
}
