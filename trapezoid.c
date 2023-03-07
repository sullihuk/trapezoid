#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define degToRad(degreesAngle) ((degreesAngle) * M_PI / 180) //Т.к. язык С вычисляет тригонометрические функции от значений выраженных в радианах, определяется функцию конвертации градусов в радианы, ввиду того, что в российской образовательной традиции стоящее под тригонометрической функцией число обычно выражено в градусах, если иное не указано специально 

float trapezoidMethod(float start, float finish, int n);//Инициализация метода трапеций

float trapezoidMethod(float start, float finish, int n)//Функция реализует метод трапеций для вычисления определенного интеграла
{
	float h, x, s;//Инициализация переменных 
	
	float equality(float param)
	{
		float equ;
		equ =(cos(degToRad(param))+2*pow(sin(degToRad(param)), 2) +3); 
		return equ;
	}
	
	s=(equality(start)+equality(finish))/2;
	
	h=(finish-start)/n;
	x=a+h;
	for (int i=1; i<=n-1; i++)
	{
		s += equality(x);
		x += h;
	}
	return s*h;
}

int main()
{
	int partition[] = {15,20,150,650}, i;
	for (i=0; i<sizeof(partition)/4; i++)
	printf("%d.The value of given equality for %d partition is: %.6f\n", i+1, partition[i], trapezoidMethod(-5, 5, partition[i]));
	return 0;
}
