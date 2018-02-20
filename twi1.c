// Program for Master Mode
// Check Code2 for Slave Mode Program
#include<avr/io.h>
#include<util/delay.h>
#include<inttypes.h>


unsigned char address=0x04, read=1, write=0;
unsigned char write_data=0x01, recv_data;

int main(void)
{

  DDRB&=~(1<<PINB1);
  DDRB|=1<<PINB0;
  PORTB |= (1<<PINB1);
  TWI_init_master();
  while(1)
  {

    if(bit_is_clear(PINB,1))
    {
    if(write_data==0x00)
    write_data=1;

    TWI_start();
    TWI_write_address(address+write);
    TWI_write_data(write_data);
    TWI_stop();


    _delay_ms(10);

   TWI_start();
    TWI_read_address(address+read);
    TWI_read_data();
    TWI_stop();
  }


    write_data = write_data * 2;
  }


}

void TWI_init_master(void)
{
  TWBR=0x01;

  // SCL freq= F_CPU/(16+2(TWBR).4^TWPS)
}

void TWI_start(void)
{

  TWCR= (1<<TWINT)|(1<<TWSTA)|(1<<TWEN);
  while(!(TWCR & (1<<TWINT)));

}

void TWI_repeated_start(void)
{

  TWCR= (1<<TWINT)|(1<<TWSTA)|(1<<TWEN);
  while(!(TWCR & (1<<TWINT)));

}

void TWI_write_address(unsigned char data)
{
  TWDR=data;
  TWCR=(1<<TWINT)|(1<<TWEN);
  while (!(TWCR & (1<<TWINT)));

}

void TWI_read_address(unsigned char data)
{
  TWDR=data;
  TWCR=(1<<TWINT)|(1<<TWEN);
  while (!(TWCR & (1<<TWINT)));

}

void TWI_write_data(unsigned char data)
{
  TWDR=data;
  TWCR=(1<<TWINT)|(1<<TWEN);
  while (!(TWCR & (1<<TWINT)));


}


void TWI_read_data(void)
{
  TWCR=(1<<TWINT)|(1<<TWEN);
  while (!(TWCR & (1<<TWINT)));

  recv_data=TWDR;
  PORTB=recv_data;
}

void TWI_stop(void)
{

  TWCR= (1<<TWINT)|(1<<TWEN)|(1<<TWSTO);
  while(!(TWCR & (1<<TWSTO)));
}
