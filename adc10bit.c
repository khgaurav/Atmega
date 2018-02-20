

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
    uint8_t theLowADC = ADCL;
    uint16_t theTenBitResults = ADCH<<8 | theLowADC;
    int x= map(theTenBitResults,0,1023,0,255);
		OCR0=x;

	}
}
int map(int x, int in_min, int in_max, int out_min, int out_max)
{
  return ((x - in_min) * (out_max - out_min) / (in_max - in_min) )+ out_min;
}

/*#include <avr/io.h>
#include <util/delay.h>

int main()
{


	ADMUX |= (1 << REFS0)|(1<<ADLAR);
	ADCSRA = (1 << ADEN) | (1 << ADSC) |(1 << ADPS2)|(1 << ADPS1);
	DDRB |= (1 << PINB3);
	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS00);
	DDRD |= (1 << PIND7);
	TCCR2 = (1<<WGM21) | (1<<WGM20) | (1<<COM21) | (1<<CS20);
	while (1)
	{
		ADMUX &= ~(1<<MUX0);
		ADCSRA |= (1<<ADSC);
		while (ADCSRA & (1<<ADSC));
		int x2=ADCH;

		ADMUX |=(1<<MUX0);
		ADCSRA |= (1<<ADSC);
		while (ADCSRA & (1<<ADSC));
		int y2=ADCH;

		int x1 = x2 - 512;
	  int y1 = 512 - y2;
	  int x = (x1 * 0.707) + (y1 * 0.707);
	  int y = (-x1 * 0.707) + (y1 * 0.707);
		x=abs(x*255/700);

		y=abs(y*255/700);

		OCR0=x;
		OCR2=y;
	}
}
*/
