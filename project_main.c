/**
 * @file project_main.c
 * @author ogirala sai vaishnavi ()
 * @brief embedded_C_project
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include<util/delay.h>

#include "activity1.h" /** * @brief  B1, B2 input pins to high results B0 output pin to high***/
#include "activity2.h" /** * @brief AC0 is used as input to vary temperature***/ 
#include "activity3.h" /** * @brief OC1A (B1) to output pwm signal ***/
#include "activity4.h" /** * @brief UART0 is used to actuate the amount of heat ***/

int main(void)
{
    activity1_init();  // activity1
    initADC();         // activity2
    initUART(103);     // activity4
    uint16_t temp;     // activity3
    char temp1;
    while(1){
            if( !(SENSOR_ON)) {       // Switch1 ON
                if(!(HEATER_ON)) {    // Switch2 ON
                    LED_ON;         // LED ON
                    temp=ReadADC(0); // Read ADC value i.e., input temperature given by user
                    temp1=PWM(temp); // Output in form of pwm signal 
                    UARTwrite(temp1); // display the temp value

                 }
            }

            else {
            LED_OFF; // No button sensor is ON
            OCR1A=0;
            }
      }

    return 0;
}

