
	#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRB |= 1 << PINB0;
	DDRB &= ~(1 << PINB1);
	PORTB |= (1<<PINB1);
	int i=1;
	while(1)
	{
		if(bit_is_clear(PINB,1))
		{
			i=1;
			_delay_ms(5);
			if( bit_is_clear(PINB,1))
			{i=0;} else i=1;
			if(i==0)
			PORTB ^=(1<<PINB0);
			
			
			
		}
		}
		}