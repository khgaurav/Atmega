#include <avr/io.h>
#include <util/delay.h>

int main()
{


	ADMUX |= (1 << REFS0)|(1<<ADLAR);
	ADCSRA = (1 << ADEN) | (1 << ADSC) |(1 << ADPS2)|(1 << ADPS1);
	DDRB |= (1 << PINB3);
	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS00);

	while (1)
	{
		ADCSRA |= (1<<ADSC);
		int adcl=ADCH;
		
		OCR0=adcl;
	}
}
