#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include <avr/io.h>
#include<util/delay.h>
int main(void)
{
    activity1_init();
    initADC();
    initPWM();
    uint16_t temp;
    while(1){
		if( !(PINB & (1<<PB3))) {
                if(!(PINB & (1<<PB2))) {
                    PORTB |= (1<<PB0);
                    temp=ReadADC(0);
                    PWM(temp);
                 }
        }
        else {
            PORTB &=~(1<<PB0);
            OCR1A=0;
        }
      }

    return 0;
}

