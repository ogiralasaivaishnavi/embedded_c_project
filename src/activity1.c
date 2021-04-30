/** @brief activity1 ***/
#include "activity1.h"

void activity1_init(){
    
    DDRB = DDRB |  (1<<PB0);
    PORTB = PORTB & ~(1<<PB0);

    //Set B1 as Input and initialize it to high
    DDRB = DDRB & ~(1<<PB3);
    PORTB = PORTB |  (1<<PB3);

    //Set B2 as Input and initialize it to high
    DDRB = DDRB & ~(1<<PB2);
    PORTB = PORTB |  (1<<PB2);
}

