#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define degToRad(degreesAngle) ((degreesAngle) * M_PI / 180)

float trapezoidMethod(float a, float b, int n)
{
	float h, x, s;
	int i;
	
	float equality(float param)
	{
		float equ;
		equ =(cos(degToRad(param))+2*pow(sin(degToRad(param)), 2) +3); 
		return equ;
	}
	
	s=(equality(a)+equality(b))/2;
	
	h=(b-a)/n;
	x=a+h;
	for (i=1; i<=n-1; i++)
	{
		s=s+equality(x);
		x=x+h;
	}
	return s*h;
}

int main()
{
	int partition[] = {15,20,150,650}, i;
	for (i=0; i<sizeof(partition)/4; i++)
	printf("%d.The value of given equality for %d partition is: %.6f\n", i+1, partition[i], tr(-5, 5, partition[i]));
	return 0;
}
