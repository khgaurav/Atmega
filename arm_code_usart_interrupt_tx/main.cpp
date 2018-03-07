#include <avr/io.h>
#include <util/delay.h>
#include<avr/interrupt.h>
#define FOSC 1000000
#define BAUD 9600
#define ubbr_value FOSC/16/BAUD-1
int ch=1;

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
		UCSRA = (1 << U2X);
		UBRRH = (unsigned char) (ubbr_value >> 8);
		UBRRL = (unsigned char) ubbr_value;
		UCSRB = (1 << TXEN);
		UCSRC = (1 << URSEL)| (3 << UCSZ0);

		DDRA &= ~(1 << PINA1);
		PORTA |= (1<<PINA0)|(1<<PINA1)|(1<<PINA2)|(1<<PINA3)|;
		while (1);
}
