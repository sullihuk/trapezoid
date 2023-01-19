#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define degToRad(degreesAngle) ((degreesAngle) * M_PI / 180)

double cosinus (double param)
{
	double equ;
	equ =cos(degToRad(param));
	return equ;
}

double stepen (double param)
{
	double step;
	step = pow(param, 2); 
	return step;
}
	
int printer (double something)
{
	printf("The value of given equality is: %.2f\n", something );
}

int main()
{
	printer(stepen(5));	
	printer(cosinus(60));	
	return 0;
}
