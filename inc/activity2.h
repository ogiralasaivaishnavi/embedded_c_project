#ifndef _ACTIVITY_2_
#define _ACTIVITY_2_
/**
 * @file activity2.h
 * @author Ragasri K
 * @brief reading analog value from the temperature set potentiometer.
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
/**
 * @brief This function reads analog value in ADC0 and converts it into a 8bit value
 * 
 * @param ch
 * @return uint16_t Returns at pin ADC0
 */

void initADC();
uint16_t ReadADC(uint8_t ch);

#endif