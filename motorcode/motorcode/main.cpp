
#include <avr/io.h>
#include<avr/interrupt.h>
#include<math.h>
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

long double map(long double x, long double in_min, long double in_max, long double out_min, long double out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
void ellipticalSquareToDisc(long double x, long double y, long double& u, long double& v)
{
    u = x * sqrt(1.0 - y*y/2.0);
    v = y * sqrt(1.0 - x*x/2.0);
}

void ellipticalDiscToSquare(long double u, long double v, long double& x, long double& y)
{
    long double u2 = u * u;
    long double v2 = v * v;
    long double twosqrt2 = 2.0 * sqrt(2.0);
    long double subtermx = 2.0 + u2 - v2;
    long double subtermy = 2.0 - u2 + v2;
    long double termx1 = subtermx + u * twosqrt2;
    long double termx2 = subtermx - u * twosqrt2;
    long double termy1 = subtermy + v * twosqrt2;
    long double termy2 = subtermy - v * twosqrt2;
    x = 0.5 * sqrt(termx1) - 0.5 * sqrt(termx2);
    y = 0.5 * sqrt(termy1) - 0.5 * sqrt(termy2);

}
int main (void)
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
			int c1= Receive();
	    int x2 = (Receive())<<8 | c1;
	    int c2=Receive();
	    int y2=(Receive())<<8 | c2;
		long double x1 = x2 - 512;
		long double y1 = 512 - y2;
		x1=map(x1,-512,512,-1,1);
		y1=map(y1,-512,512,-1,1);
		long double xans,yans;
		ellipticalSquareToDisc(x1, y1, xans, yans);



		long double x = (xans * 0.707) + (yans * 0.707);
		long double y = (-xans * 0.707) + (yans * 0.707);
		ellipticalDiscToSquare(x,y,xans,yans);
		long double x3=map(xans,-0.991273,0.991273,-255,255);
		long double y3=map(yans,-0.991273,0.991273,-255,255)+100;
		/*int x2=x-512;
		int y2=512-y;
		if(y2/x2>=12.8&&y2/x2<=-12.8)
			x2=0;
		if(y2/x2<=0.390625&&y2/x2>=-0.390625)
		y2=0;
		int x3 = x2;
		int y3 = y2;
		int x4= (x3*0.707)+(y3*0.707);
		int y4=-(x3*0.707)+(y3*0.707);

		int x5=map(x4,-723,723,-255,255);
		int y5=map(y4,-723,723,-255,255);

		if(x5<20&&x5>-20)
		x5=0;

		if(y5<20&&y5>-20)
		y5=0;*/

		if(x3>0)
		{
			OCR0=(int)x3;
			PORTB|=1<<PB0;
		}
		else
		{
			OCR0=-(int)x3;
			PORTB&=~(1<<PB0);
		}
		if(y3>0)
		{
		OCR2=(int)y3;
		PORTD|=1<<PD2;
		}
		else
		{
			OCR2=-(int)y3;
			PORTD&=~1<<PD2;
			}
		}
		}
