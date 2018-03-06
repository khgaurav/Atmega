
#include <avr/io.h>
#include <util/delay.h>
#include<avr/interrupt.h>
#include <stdlib.h>
int ch=1;
int y2,x2;
int main()
{


	ADMUX |= (1 << REFS0);
	ADCSRA = (1 << ADEN)  |(1 << ADPS1)|(1<<ADIE);
	DDRB |= (1 << PINB3);
	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS00);
	DDRD |= (1 << PIND7);
	TCCR2 = (1<<WGM21) | (1<<WGM20) | (1<<COM21) | (1<<CS20);
  sei();
  ADCSRA|=(1<<ADSC);
	while (1)
	{
		int x1 = x2 - 512;
		int y1 = 512 - y2;

		int x = (x1 * 0.707) + (y1 * 0.707);
		int y = (-x1 * 0.707) + (y1 * 0.707);

		x = map(x, -761, 761, -255, 255);
		y = map(y, -761, 761, -255, 255);

		OCR0=x;
		OCR2=y;
	}
}
int map(int x, int in_min, int in_max, int out_min, int out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
ISR(ADC_vect)
{
  int  tmp1 = (ADCL & 0x0F);         // convert HEX value of ADC 10 bit
  int  tmp2 = ADCL >> 4;             // output in to decimal
  int  tmp3 = (ADCH & 0x0F);
       tmp2 = tmp2*16;
       tmp3 = tmp3*256;
  int  t = tmp1+tmp2+tmp3;


  if(ch==1)
  {

    ch=0;
    ADMUX ^=(1<<MUX0);
		y2 = tmp1+tmp2+tmp3;
  }
  else if(ch==0)
  {
    x2=tmp1+tmp2+tmp3;
    ch=1;
    ADMUX^=(1<<MUX0);
  }

  ADCSRA |= (1<<ADSC);
}
