#include <avr/io.h>
#include <util/delay.h>

int main()
{


	ADMUX |= (1 << REFS0)|(1<<ADLAR);
	ADCSRA = (1 << ADEN) | (1 << ADSC) |(1 << ADPS2)|(1 << ADPS1);
	DDRB |= (1 << PINB3);

	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS00);
	DDRD |= (1 << PIND7)|(1<<PIND4)|(1<<PIND5);
	TCCR2 = (1<<WGM21) | (1<<WGM20) | (1<<COM21) | (1<<CS20);
  TCCR1A = (1<<WGM11) | (1<<WGM10) | (1<<COM1A1) | (1<<CS10);
  TCCR1B = (1<<WGM11) | (1<<WGM10) | (1<<COM1B1) | (1<<CS10);
  PORTD&=~(1<<PIND4);
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

		int x1 = x2 - 128;
		int y1 = 128 - y2;
		int x0 = (x1 * 0.707) + (y1 * 0.707);
		int y0= (-x1 * 0.707) + (y1 * 0.707);
		int  x = map(x0, -180, 180, -255, 255);
		int  y = map(y0, -180, 180, -255, 255);
		if(x<0)
		{
			OCR0=0;
			OCR1B=-x;
		}
		else
		{
			OCR0=x;
			OCR1B=0;
		}
		if(y<0)
		{
			OCR2=0;
			OCR1A=-y;
		}
		else
		{
			OCR2=y;
			OCR1A=0;
		}
	}
}
int map(int x, int in_min, int in_max, int out_min, int out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
