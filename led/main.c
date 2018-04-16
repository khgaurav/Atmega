
#include "avr/io.h"
#include <util/delay.h>

int main ()
{
	unsigned int bright;

	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS00);
	TCCR2 |= 1<<WGM20 | 1<< WGM21 | 1<< COM21 |1 <<CS20;
	DDRB=0xFF;
	DDRA=0xFF;
	PORTA&=~1<<PA0;
	PORTB&=~(1<<PB0);

		while(1)
		{


			OCR0=255;
			OCR2=255;
			PORTA=0xFF;
			PORTB=0xFF;


		}

}
