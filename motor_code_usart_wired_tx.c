#include <avr/io.h>
#include <util/delay.h>
#define FOSC 1000000
#define BAUD 9600
#define ubbr_value FOSC/16/BAUD-1

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

  ADMUX |= 1<< REFS0;
  ADCSRA |= 1<< ADPS2;
  ADCSRA |= 1<< ADEN;
	while (1)
	{
    ADCSRA |= 1<< ADSC;
		while (ADCSRA & (1<< ADSC));
		uint8_t x1 = ADCL;
    Transmit(x1);
    Transmit(ADCH);


		ADMUX ^= (1<<MUX0);
		ADCSRA |= 1<< ADSC;
		while (ADCSRA & (1<< ADSC));
		uint8_t y1 = ADCL;
    Transmit(y1);
    Transmit(ADCH);
		ADMUX ^= (1<<MUX0);



  }
}
