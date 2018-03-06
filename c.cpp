#include <iostream>
#include <math.h>
#define epsilon 0.0000001
using namespace std;
 int main()
{
  int gear[1024];
  for(int i=0;i<20;i++)
		for(int j=i*51.2;j<i*51.2+51.2;j++)
		gear[j]=i;
    for(int i=0;i<1024;i++)
    cout<<gear[i];
  }
