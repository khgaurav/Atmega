#include <avr/io.h>
#include <util/delay.h>


#define FOSC 1000000
#define BAUD 9600
#define MYUBRR (FOSC/16)/BAUD-1
void USARTInit(uint16_t ubrr_value)
{   UBRRL = ubrr_value;
   UBRRH = (ubrr_value>>8);
   UCSRC=(1<<USBS)|(3<<UCSZ0);
   UCSRB=(1<<RXEN)|(1<<TXEN);
   DDRB|=(1<<PINB0);

}
char USARTReadChar(void)
{
   while(!(UCSRA & (1<<RXC)));

   return UDR;
}


void USARTWriteChar(char data)
{
   while(!(UCSRA & (1<<UDRE)));
   UDR=data;
	 PORTB |= (1<<PINB0);
   _delay_ms(200);
   PORTB&=~(1<<PINB0);
   _delay_ms(200);
}

void main()
{
   char data='a';
USARTInit(25);
while(1)
   {
     USARTWriteChar(0xf0);
			data=USARTReadChar();
      if(data==0xff)
      {
        PORTB |= (1<<PINB0);
         _delay_ms(2000);
         PORTB&=~(1<<PINB0);
         _delay_ms(2000);
      }

   }
}
/*
#include <avr/io.h>
#include <util/delay.h>

int main()
{


	ADMUX |= (1 << REFS0)|(1<<ADLAR);
	ADCSRA = (1 << ADEN) | (1 << ADSC) |(1 << ADPS2)|(1 << ADPS1);
	DDRB |= (1 << PINB3);
	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS00);
	DDRD |= (1 << PIND7);
	TCCR2 = (1<<WGM21) | (1<<WGM20) | (1<<COM21) | (1<<CS20);
	while (1)
	{
		ADMUX &= ~(1<<MUX0);
		ADCSRA |= (1<<ADSC);
		while (ADCSRA & (1<<ADSC));
		int x2=ADCH;

		ADMUX |=(1<<MUX0);
		ADCSRA |= (1<<ADSC);
		while (ADCSRA & (1<<ADSC));
		int y2=ADCH;

		int x1 = x2 - 512;
	  int y1 = 512 - y2;
	  int x0 = (x1 * 0.707) + (y1 * 0.707);
	  int y0= (-x1 * 0.707) + (y1 * 0.707);
		int   x = map(x0, -761, 761, -255, 255);
    int  y = map(y0, -761, 761, -255, 255);
		OCR0=x;
		OCR2=y;
	}
}
int map(int x, int in_min, int in_max, int out_min, int out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
*/
