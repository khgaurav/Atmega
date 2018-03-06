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
PORTD &= ~(1<< PIND2);
 UCSRA = (1 << U2X);
  UBRRH = (unsigned char) (ubbr_value >> 8);
  UBRRL = (unsigned char) ubbr_value;
  UCSRB = (1 << RXEN);
  UCSRC = (1 << URSEL) | (3 << UCSZ0);


	while (1)
	{
		if(Receive()!=0x11)
		continue;
		int x1= Receive();
    uint16_t x = (Receive())<<8 | x1;
    int y1=Receive();
    uint16_t y=(Receive())<<8 | y1;
    int x2=x-512;
    int y2=512-y;
    int x3 = x2;
    int y3 = y2;
    int x4= (x3*0.707)+(y3*0.707);
    int y4=(-x3*0.707)+(y3*0.707);

    int x5=map(x4,-723,723,-255,255);
    int y5=map(y4,-723,723,-255,255);

		if(x5<20&&x5>-20)
		x5=0;

		if(y5<20&&y5>-20)
		y5=0;

		if(x5>0)
		{
			OCR0=x5;
			PORTB|=1<<PB0;
		}
		else
		{
			OCR0=-x5;
			PORTB&=~(1<<PB0);
		}
		if(y5>0)
		{
		OCR2=y5;
		PORTD|=1<<PD2;
		}
		else
		{
			OCR2=-y5;
			PORTD&=~1<<PD2;
		}
  }
}
