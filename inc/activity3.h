#ifndef _ACTIVITY_3_
#define _ACTIVITY_3_
/**
 * @file activity3.h
 * @author ogirala sai vaishnavi
 * @brief To generate pwm signal according to ADC output
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
/**
 * @brief PWM generation with prescaler 64. 
 * 
 * @param temp
 * @return char
 */

void initPWM(void);
char PWM(uint16_t temp);

#endif