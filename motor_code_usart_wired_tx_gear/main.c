
#include <avr/io.h>
#include <util/delay.h>
#include<avr/interrupt.h>
#define FOSC 1000000
#define BAUD 9600
#define ubbr_value FOSC/16/BAUD-1
int ch=0;
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
	UCSRA = (1 << U2X);
	UBRRH = (unsigned char) (ubbr_value >> 8);
	UBRRL = (unsigned char) ubbr_value;
	UCSRB = (1 << TXEN);
	UCSRC = (1 << URSEL)| (3 << UCSZ0);
	ADMUX |= 1<< REFS0;													// ADC setup
	ADCSRA |= 1<< ADPS2;
	ADCSRA|=1<<ADIE;
	sei();
	ADCSRA |= 1<< ADEN;
	ADCSRA|=(1<<ADSC);
	while (1);

}
ISR(ADC_vect)
{
	uint8_t t1 = ADCL;
	if(ch==0)
	{
		Transmit(0x11);
		ch=1;
		ADMUX |=(1<<MUX0);
	}
	else if(ch==1)
	{
		Transmit(0x21);
		ch=2;
		ADMUX |=(1<<MUX1);
		ADMUX &=~(1<<MUX0);
	}
	else
	{
		Transmit(0x31);
		ch=0;
		ADMUX &=~(1<<MUX1);
		ADMUX &=~(1<<MUX0);
	}
	Transmit(t1);
	Transmit(ADCH);
	ADCSRA |= (1<<ADSC);
}
