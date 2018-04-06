#include <avr/io.h>
#include <util/delay.h>
#define FOSC 1000000// Clock Speed
#define BAUD 4800
#define ubbr_value (FOSC/(16*BAUD))-1
int Receive()
{
	while (! (UCSRA & (1 << RXC)));
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
DDRD |= 1<< PB7 | 1<< PD4;
PORTB &= ~(1<< PINB0);
PORTD &= ~(1<< PIND4);
UCSRA = (1 << U2X);

  UBRRH = 0x03;
  UBRRL = 0x40;
  UCSRB = (1 << RXEN);
  UCSRC = (1 << URSEL) | (3 << UCSZ0);


	while (1)
	{

		if(Receive()==97)
		{

			int x=0;
			int ch=Receive()-'0';
			for(int i=100;i>=1;i/=10)
			x+=(Receive()-'0')*i;
			OCR0=x;
			if(ch==0)
				PORTB|=(1<<PINB0);
			else if(ch==1)
				PORTB &= ~(1<< PINB0);
		}
		else
		{
			OCR0=0;
			OCR2=0;
			PORTB &= ~(1<< PINB0);
			PORTD &= ~(1<< PIND4);
		}
		if(Receive()==98)
		{

			int y=0;
			int ch=Receive()-'0';
			for(int i=100;i>=1;i/=10)
			y+=(Receive()-'0')*i;
			OCR2=y;
			if(ch==0)
				PORTD|=(1<<PIND4);
			else if(ch==1)
				PORTD &= ~(1<< PIND4);
		}
		else
		{
			OCR0=0;
			OCR2=0;
			PORTB &= ~(1<< PINB0);
			PORTD &= ~(1<< PIND4);
		}
	}
}
