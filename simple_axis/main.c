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


DDRB |= 1<< PB3 | 1<<PINB0 | 1<<PINB1;

DDRD |= 1<< PB7 | 1<< PD4;
DDRA|=1<<PINA0;
PORTB &= ~(1<< PINB0);
PORTB &= ~(1<< PINB3);
PORTD &= ~(1<< PIND7);
PORTA &= ~(1<<PINA0);


  UBRRH = 0x00;
  UBRRL = 0x33;
  UCSRB = (1 << RXEN);
  UCSRC = (1 << URSEL) | (3 << UCSZ0);


	while (1)
	{

		if(Receive()==97)
		{
			int ch=Receive()-'0';
			int pwm=Receive()-'0';

			if(ch==1)
					PORTB|=(1<<PINB0);

			else if(ch==0)
					PORTB &= ~(1<< PINB0);
					if(pwm==1)
							PORTB|=(1<<PINB3);

					else if(pwm==0)
							PORTB &= ~(1<< PINB3);

		}
		else
		{
			PORTB &= ~(1<< PINB3);
			PORTD &= ~(1<< PIND7);

			PORTB &= ~(1<< PINB0);
			PORTA &= ~(1<< PINA0);
		}
		if(Receive()==98)
		{


			int ch=Receive()-'0';
			int pwm=Receive()-'0';

			if(ch==1)
				PORTA|=(1<<PINA0);
			else if(ch==0)
				PORTA &= ~(1<< PINA0);
				if(pwm==1)
						PORTD|=(1<<PIND7);

				else if(pwm==0)
						PORTD &= ~(1<< PIND7);

		}
		else
		{
			PORTB &= ~(1<< PINB3);
			PORTD &= ~(1<< PIND7);

			PORTB &= ~(1<< PINB0);
			PORTA &= ~(1<< PINA0);
		}
	}
}
