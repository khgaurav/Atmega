#include <avr/io.h>
#include <util/delay.h>
#define FOSC 1843200// Clock Speed
#define BAUD 9600
#define MYUBRR FOSC/16/BAUD-1
void main( void )
{
  USART_Init ( MYUBRR );
  DDRB |= 1 << PINB0;
  PORTB &= ~(1<<PINB0);
  while(1)
  {
    char c=USART_Receive()
    if(c==0b11110000)
    PORTB |= (1<<PINB0);
  }
}
void USART_Init( unsigned int ubrr)
{
  UBRRH = (unsigned char)(ubrr>>8);
  UBRRL = (unsigned char)ubrr;
  UCSRB = (1<<RXEN)|(1<<TXEN);
  UCSRC = (1<<URSEL)|(1<<USBS)|(3<<UCSZ0);
}
unsigned char USART_Receive( void )
{
  while ( !(UCSRA & (1<<RXC)));
  return UDR;
}
