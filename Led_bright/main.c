
#include "avr/io.h"
#include <util/delay.h>

int main ()
{
	unsigned int bright;

	TCCR2 |= 1<<WGM20 | 1<< WGM21 | 1<< COM21 |1 <<CS20;
	DDRD |= 1<< PB7 | 1<< PB2;
	TCCR0 |= 1<<WGM00 | 1<< WGM01  | 1<< COM01 |1 <<CS00;
	DDRB |= 1<< PB3;
		while(1)
		{

			for(bright=0; bright<255; bright++)
		{
			OCR0=bright;
			OCR2=bright;
			_delay_ms(2);
		}
		_delay_ms(1000);
		for(bright=255; bright>1; bright--)
		{
			OCR0=bright;
			OCR2=bright;
			_delay_ms(2);
		}
_delay_ms(1000);
		}

}
