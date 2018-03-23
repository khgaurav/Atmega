#include <avr/io.h>
#include <util/delay.h>
#define FOSC 1000000// Clock Speed
#define BAUD 9600
#define ubbr_value FOSC/16/BAUD-1
int Receive()
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
PORTD &= ~(1<< PIND6);
 UCSRA = (1 << U2X);
  UBRRH = (unsigned char) (ubbr_value >> 8);
  UBRRL = (unsigned char) ubbr_value;
  UCSRB = (1 << RXEN);
  UCSRC = (1 << URSEL) | (3 << UCSZ0);


	while (1)
	{

		uint16_t x,y;
		int x1,y1;
		if(Receive()==0x11)
		{
				x1= Receive();
    		x = Receive();

		}
		else
		{
			OCR0=0;
			OCR2=0;
			PORTD&=~1<<PD6;
			PORTB&=~(1<<PB0);
			continue;
		}
		if(Receive()==0x21)
		{
				y1=Receive();
    		y=Receive();
		}
		else
		{
			OCR0=0;
			OCR2=0;
			PORTD&=~1<<PD6;
			PORTB&=~(1<<PB0);
			continue;
		}
		if(x<20&&x>-20)
		x=0;

		if(y<20&&y>-20)
		y=0;

		if(x1==1)
		{
			OCR0=x;
			PORTB|=1<<PB0;
		}
		else
		{
			OCR0=-x;
			PORTB&=~(1<<PB0);
		}
		if(y1==1)
		{
		OCR2=y;
		PORTD|=1<<PD6;
		}
		else
		{
			OCR2=-y;
			PORTD&=~1<<PD6;
		}
  }
}
