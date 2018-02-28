#include <iostream>
#include <math.h>
#define epsilon 0.0000001
using namespace std;
double map(double x, double in_min, double in_max, double out_min, double out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
void ellipticalSquareToDisc(double x, double y, double& u, double& v)
{
    u = x * sqrt(1.0 - y*y/2.0);
    v = y * sqrt(1.0 - x*x/2.0);
}

void ellipticalDiscToSquare(double u, double v, double& x, double& y)
{
    double u2 = u * u;
    double v2 = v * v;
    double twosqrt2 = 2.0 * sqrt(2.0);
    double subtermx = 2.0 + u2 - v2;
    double subtermy = 2.0 - u2 + v2;
    double termx1 = subtermx + u * twosqrt2;
    double termx2 = subtermx - u * twosqrt2;
    double termy1 = subtermy + v * twosqrt2;
    double termy2 = subtermy - v * twosqrt2;
    x = 0.5 * sqrt(termx1) - 0.5 * sqrt(termx2);
    y = 0.5 * sqrt(termy1) - 0.5 * sqrt(termy2);

}
int main()
{
  int gear[1024];
  for(int i=0;i<20;i++)
		for(int j=i*51.2;j<i*51.2+51.2;j++)
		gear[j]=i;
    for(int i=0;i<1024;i++)
    cout<<gear[i];
  }
