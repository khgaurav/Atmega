
#include <avr/io.h>

#include <util.delay.h>
int main (void)
{
  char data=0x01;

  DDRB |= (1<<PINB7)|(1<<PINB5)|(1<<PINB4)|(1<<PINB0);
  DDRB &= ~(1<<PINB6);                

  SPCR |= (1<<MSTR);               
  SPCR |= (1<<SPR0)|(1<<SPR1);     
  SPCR |= (1<<SPE);                

  while(1)
  {
    PORTB&=~(1<<PINB0);
    SPDR = 0x01;                 
    while(!(SPSR & (1<<SPIF)));  
    PORTB|=1<<PINB0;



    
  }
}
