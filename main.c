#include <avr/io.h>
#include <util/delay.h>
#define FOSC 1000000// Clock Speed
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
  TCCR0 |= 1<<WGM00 | 1<< WGM01  | 1<< COM01 |1 <<CS00;
DDRB |= 1<< PB3 | 1<<PINB0 | 1<<PINB1;
TCCR2 |= 1<<WGM20 | 1<< WGM21 | 1<< COM21 |1 <<CS20;
TCCR1A = 1<<COM1A1 | 1<<COM1B1  | 1<<WGM10;
TCCR1B = 1<<WGM12| 1<<CS10;
DDRD |= 1<< PD7 | 1<< PD2 | 1<<PD4| 1<<PD5;
PORTB &= ~(1<< PINB0);
PORTD &= ~(1<< PIND2);
 UCSRA = (1 << U2X);
  UBRRH = (unsigned char) (ubbr_value >> 8);
  UBRRL = (unsigned char) ubbr_value;
  UCSRB = (1 << RXEN);
  UCSRC = (1 << URSEL) | (3 << UCSZ0);


	while (1)
	{

		uint16_t x,y;
		if(Receive()==0x11)
		{
				int x1= Receive();
    		x = (Receive())<<8 | x1;

		}
		else
		{
			OCR0=0;
			OCR2=0;
			OCR1AL=0;
			OCR1BL=0;
			continue;
		}
		if(Receive()==0x21)
		{
				int y1=Receive();
    		y=(Receive())<<8 | y1;
		}
		else
		{
			OCR0=0;
			OCR2=0;
			OCR1AL=0;
			OCR1BL=0;
			continue;
		}
		int x2=x-512;
    int y2=512-y;
    int x3 = x2;
    int y3 = y2;
    int x4= (x3*0.707)+(y3*0.707);
    int y4=(-x3*0.707)+(y3*0.707);
		if(y2/x2>=12.8&&y2/x2<=-12.8)
		y4=x4;
		if(y2/x2<=0.0390625&&y2/x2>=-0.0390625)
		y4=-x4;
    int x5=map(x4,-723,723,-255,255);
    int y5=map(y4,-723,723,-255,255);

		if(x5<20&&x5>-20)
		x5=0;

		if(y5<20&&y5>-20)
		y5=0;

		if(x5>0)
		{
			OCR0=x5;
			OCR1BL=0;
		}
		else
		{
			OCR0=0;
			OCR1BL=--x5;
		}
		if(y5>0)
		{
		OCR2=y5;
		OCR1AL=0;
		}
		else
		{
			OCR2=0;
			OCR1AL=-y5;
		}
  }
}
