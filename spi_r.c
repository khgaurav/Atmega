#include <avr/io.h>

#include <util/delay.h>
int main (void)
{
  char data;

  DDRB &= ~((1<<PINB7)|(1<<PINB5)|(1<<PINB4));
  DDRB |= (1<<PINB6)|(1<<PINB0);

  SPCR &= ~(1<<MSTR);
  SPCR |= (1<<SPR0)|(1<<SPR1);
  SPCR |= (1<<SPE);

  while(1)
  {

    while(!(SPSR & (1<<SPIF)));
    data = SPDR;
    if(data==0x01)
    PORTB|=(1<<PINB0);
    else
    PORTB&=~(1<<PINB0);



  }
}
