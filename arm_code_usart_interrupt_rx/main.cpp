#include <avr/io.h>
#include <util/delay.h>
#include<avr/interrupt.h>
#define FOSC 1000000
#define BAUD 9600
#define ubbr_value FOSC/16/BAUD-1
#define _BV(bit,pin) (PORTpin |= 1 << (bit))
int ch=1;

void Transmit(unsigned char data)
{
	while (! (UCSRA & (1 << UDRE)) );
	UDR = data;

}
int Receive()
{
	while (! (UCSRA & (1 << RXC)) );
	return UDR;
}
int main(void)
{
		UCSRA = (1 << U2X);
		UBRRH = (unsigned char) (ubbr_value >> 8);
		UBRRL = (unsigned char) ubbr_value;
		UCSRB = (1 << RXEN);
		UCSRC = (1 << URSEL)| (3 << UCSZ0);

		DDRA = 0xFF;
		PORTC = 0x00;
		DDRC = 0xFF;
		PORTC = 0x00;
		while (1)
		{
			ch=Receive()-41;
			if(ch==5)
			continue;
			if(Receive()==0x50)
			{
				PORTC=0x00;
				PORTC|=_BV(1<<ch);
			}

		}
		}
