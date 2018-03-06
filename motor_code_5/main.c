
#include <avr/io.h>
#include <util/delay.h>


int map(int x4, int in_min, int in_max, int out_min, int out_max)
{
	return (x4 - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

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

		ADMUX &= ~(1<<MUX0);
		ADCSRA |= (1<<ADSC);
		while (ADCSRA & (1<<ADSC));
    int c=ADCL;
		int x2 = ADCH<<8|c;

		ADMUX |=(1<<MUX0);
		ADCSRA |= (1<<ADSC);
		while (ADCSRA & (1<<ADSC));
    c=ADCL;
		int y2 = ADCH<<8|c;


    int x1 = x2 - 512;
    int y1 = 512 - y2;

    int x = (x1 * 0.707) + (y1 * 0.707);
    int y = (-x1 * 0.707) + (y1 * 0.707);

    x = map(x, -761, 761, -255, 255);
    y = map(y, -761, 761, -255, 255);

		if(x4<0)
		{OCR0 = -x4;
			//PORTB|=(1<<PINB3);
		}
		else
		{
			OCR0=x4;
			PORTB&=~(1<<PINB3);
		}

		if(y4<0)
		{
			OCR2 = -y4;
			//PORTD|=(1<<PIND7);
		}
		else
		{
			OCR2=y4;
			PORTD&=~(1<<PIND7);
		}
	}
}
