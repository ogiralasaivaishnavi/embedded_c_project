#include<avr/io.h>
void InitADC(){
    ADMUX|=(1<<REFS0);
    ADCSRA|=(1<<ADEN)|(7<<ADPS0);
}
uint16_t ReadADC(uint8_t ch){
    ADMUX&=0xF8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA |=(1<<ADSC);
    while(!(ADCSRA&(1<<ADIF)));
    ADCSRA|(1<<ADIF);
    return(ADC);
}
int main(void){
 InitADC();
 uint16_t temp;
 while(1);{
    temp = ReadADC(0);
 }
return 0;
}


