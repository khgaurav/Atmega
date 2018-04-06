
#include "avr/io.h"
#include <util/delay.h>

int main ()
{
	unsigned int bright;

	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS00);
	DDRB=0xFF;
	DDRA=0xFF;
	DDRC=0xFF;
	DDRD=0xFF;
	PORTA=0xFF;
	PORTB=0xFF;
	PORTC=0xFF;
	PORTD=0xFF;
		while(1)
		{

			for(bright=0; bright<255; bright++)
		{
			OCR0=bright;
			_delay_ms(2);
		}
		for(bright=255; bright>1; bright--)
		{
			OCR0=bright;
			_delay_ms(2);
		}
		}

}
