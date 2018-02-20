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
  while(true)
  {
    double x2,y2;
    cin>>x2>>y2;
    double x1 = x2 - 512;
    double y1 = 512 - y2;
    x1=map(x1,-512,512,-1,1);
    y1=map(y1,-512,512,-1,1);
    double xans,yans;
    ellipticalSquareToDisc(x1, y1, xans, yans);



    double x = (xans * 0.707) + (yans * 0.707);
    double y = (-xans * 0.707) + (yans * 0.707);
    ellipticalDiscToSquare(x,y,xans,yans);
    int x3=map(xans,-0.991273,0.991273,-255,255);
    int y3=map(yans,-0.991273,0.991273,-255,255);
    cout<<x3<<"\t"<<y3<<"\n";
  }
}
