#include <avr/io.h>
#include <util/delay.h>
#define FOSC 1843200// Clock Speed
#define BAUD 9600
#define MYUBRR FOSC/16/BAUD-1
void main( void )
{
  DDRB |= 1 << PINB0;
  PORTB &= ~(1<<PINB0);
  USART_Init ( MYUBRR );
  while(1)
  {
    USART_Transmit(0b11110000);
  }
}
void USART_Transmit( unsigned char data )
{
  PORTB &= ~(1<<PINB0);
  while ( !( UCSRA & (1<<UDRE)) );
  UDR = data;
  PORTB |= (1<<PINB0);
}
void USART_Init( unsigned int ubrr)
{
  UBRRH = (unsigned char)(ubrr>>8);
  UBRRL = (unsigned char)ubrr;
  UCSRB = (1<<RXEN)|(1<<TXEN);
  UCSRC = (1<<URSEL)|(1<<USBS)|(3<<UCSZ0);
}
