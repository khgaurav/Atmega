/*
 * UARTTwoWay2v2.cpp
 *
 * Created: 29-Jan-18 10:49:03 PM
 * Author : MAHE
 */

#include <avr/io.h>
#include <util/delay.h>

unsigned char rec;
unsigned char Receive(void)
{
	while (! (UCSRA & (1 << RXC)) );
	return UDR;
}

void Transmit(unsigned char data)
{
	while (! (UCSRA & (1 << UDRE)) );
	UDR = data;
	_delay_ms(20);
				PORTB |= 1<<PINB0;
				_delay_ms(20);
				PORTB &= ~(1<<PINB0);
}

int main(void)
{
	DDRB |= 1<<PINB0;
	int ubbr_value = 25;
	UBRRH = (unsigned char) (ubbr_value >> 8);
	UBRRL = (unsigned char) ubbr_value;
	UCSRB = (1 << RXEN) | (1 << TXEN);
	UCSRC = (1 << USBS) | (3 << UCSZ0);
	while (1)
	{
		Transmit(0b10101010);
		rec= Receive();
		if(rec == 0b11110001 )
		{
			_delay_ms(10);
			PORTB |= 1<<PINB0;
			_delay_ms(10);
			PORTB &= ~(1<<PINB0);
		}
	}
}
