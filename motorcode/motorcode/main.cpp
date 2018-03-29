
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
	DDRD |= 1<< PB7 | 1<< PD4;
	PORTB &= ~(1<< PINB0);
	PORTD &= ~(1<< PIND4);
	UCSRA = (1 << U2X);
		UBRRH = 0x00;
	UBRRL = 0x01;
	UCSRB = (1 << RXEN);
	UCSRC = (1 << URSEL) | (3 << UCSZ0);
	while (1)
	{

		double x2,y2;
		if(Receive()==0x11)
		{
			int x1= Receive();
			x2 = (Receive())<<8 | x1;

		}
		else
		{
			OCR0=0;
			OCR2=0;
			PORTD&=~1<<PD4;
			PORTB&=~(1<<PB0);
			continue;
		}
		if(Receive()==0x21)
		{
			int y1=Receive();
			y2=(Receive())<<8 | y1;
		}
		else
		{
			OCR0=0;
			OCR2=0;
			PORTD&=~1<<PD4;
			PORTB&=~(1<<PB0);
			continue;
		}
		long double x1 = x2 - 512;
		long double y1 = 512 - y2;
		if(y1/x1>=12.8&&y1/x1<=-12.8)
		x1=0;
		if(y1/x1<=0.390625&&y1/x1>=-0.390625)
		y1=0;
		x1=map(x1,-512,512,-1,1);
		y1=map(y1,-512,512,-1,1);
		long double xans,yans;
		ellipticalSquareToDisc(x1, y1, xans, yans);
		long double x = (xans * 0.707) + (yans * 0.707);
		long double y = (-xans * 0.707) + (yans * 0.707);
		ellipticalDiscToSquare(x,y,xans,yans);
		long double x3=map(xans,-0.991273,0.991273,-255,255);
		long double y3=map(yans,-0.991273,0.991273,-255,255)+70;
		if(x3>255)
		x3=255;
		if(y3>255)
		y3=255;
		if(x3<20&&x3>-20)
		x3=0;

		if(y3<20&&y3>-20)
		y3=0;
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
			PORTD|=1<<PD4;
		}
		else
		{
			OCR2=-(int)y3;
			PORTD&=~1<<PD4;
		}
	}
}
