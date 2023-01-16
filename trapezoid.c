#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float trap(float a, float b, int n)
{
	float h, x, s;
	int i;
	
	float equality(float param)
	{
		float equ;
		equ =(cos(param)+2*pow(sin(param), 2) +3); 
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
	for (i=0; i<partition.length; i++)
		printf("The value of given equality is: %d", trap(-5, 5, partition[i]));
				return 0;
}
