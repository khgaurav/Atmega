

#include <avr/io.h>
#include <util/delay.h>

int main()
{


	ADMUX |= (1 << REFS0);
	ADCSRA = (1 << ADEN) | (1 << ADSC) |(1 << ADPS2)|(1 << ADPS1);
	DDRB |= (1 << PINB3);
	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS00);
	DDRD |= (1 << PIND7);
	TCCR2 = (1<<WGM21) | (1<<WGM20) | (1<<COM21) | (1<<CS20);
	while (1)
	{

		ADCSRA |= (1<<ADSC);
		while (ADCSRA & (1<<ADSC));
		tmp1 = (ADCL & 0x0F);         // convert HEX value of ADC 10 bit
	       tmp2 = ADCL >> 4;             // output in to decimal
	       tmp3 = (ADCH & 0x0F);
	       tmp2 = tmp2*16;
	       tmp3 = tmp3*256;
	       t = tmp1+tmp2+tmp3;
    int x= map(t,0,1023,0,255);
		OCR0=x;

	}
}
int map(int x, int in_min, int in_max, int out_min, int out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
