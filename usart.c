#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
   DDRB |= 1 <<PINB0;
   PORTB ^= 1 <<PINB0;
   int a=0;
   int c=0;
   int cnt=0;
   
   //communication
   int ubrr_value = 25;
   UBRRH = (unsigned char) (ubrr_value >> 8);
   UBRRL = (unsigned char) ubrr_value;
   UCSRB = (1 << RXEN) | (1 << TXEN);
   UCSRC = (1 << USBS) | (3 << UCSZ0);
   
   
   
    while (1) 
    {
		if(bit_is_clear(PINB,1))
		{
			c++;
			if(c > 500)
			{
				if(a == 0)
				{
					PORTB ^= 1 <<PINB0;
					a=1;
					
					//communication
					while(! (UCSRA & (1 << UDRE)));
					UDR = 0b11110000;
					
				}
				c=0;
			}
		}
		else
		{
			cnt++;
			if(cnt > 500)
			{
				a=0;
				cnt=0;
			}
		}
    }
}
