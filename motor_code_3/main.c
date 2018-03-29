#include <avr/io.h>
#include <util/delay.h>
#include<avr/interrupt.h>
#define FOSC 1000000
#define BAUD 9600
#define ubbr_value (FOSC/(16*BAUD))-1
int ch=1;
unsigned char Receive(void)
{
	while (! (UCSRA & (1 << RXC)) );
	return UDR;
}

void Transmit(unsigned char data)
{
	while (! (UCSRA & (1 << UDRE)) );
	UDR = data;

}
long map(long x, long in_min, long in_max, long out_min, long out_max)
{
	return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
int main(void)
{
	TCCR0 |= 1<<WGM00 | 1<< WGM01  | 1<< COM01 |1 <<CS00;
DDRB |= 1<< PB3 | 1<<PINB0 | 1<<PINB1;
TCCR2 |= 1<<WGM20 | 1<< WGM21 | 1<< COM21 |1 <<CS20;
DDRD |= 1<< PB7 | 1<< PB2;
PORTB &= ~(1<< PINB0);
PORTD &= ~(1<< PIND2);


   UBRRH = (unsigned char) (ubbr_value >> 8);
   UBRRL = (unsigned char) ubbr_value;
   UCSRB = (1 << TXEN);
   UCSRC = (1 << URSEL)| (3 << UCSZ0);
	while (1)
	{
		Transmit(0x11);
		Transmit(48);
		Transmit(48);
		Transmit(48);
	}

}
