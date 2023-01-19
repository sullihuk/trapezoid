#include <stdio.h> //Подключение стандартного ввоода/вывода
#include <math.h> //Подключение математических вычислений (тригонометрия, трансцендентные величины и т.п.)
#include <stdlib.h> //Подключение стандартных библиотек
#define degToRad(degreesAngle) ((degreesAngle) * M_PI / 180) // Определение встроенной функции для перевода градусов в радианы, т.к. С расчитывает тригонометрические функции в радианах, а заданная функция имеет две тригонометрических компоненты.

float trapezoidMethod(float a, float b, int n)//Объявление функции для вычисления определенного интеграла методом трапеций
{
	float h, x, s; //Инициализация переменных с плвавющей точкой
	int i; // Инициализация целой переменной-итератора
	
	float equality(float param) //Объявление метода представляющего собой функцию (здесь под функцией понимается не программная, а математическая функция y=f(x)) от которой будет вычисляться интеграл. Параметром является, непосредственно, 'x'
	{
		float equ; //Инициализация переменной-уравнения f(x)
		equ =(cos(degToRad(param))+2*pow(sin(degToRad(param)), 2) +3); //Функция данная в задании. Вариант с радианами. 
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
	printf("%d.The value of given equality for %d partition is: %.9f\n", i+1, partition[i], trapezoidMethod(-5, 5, partition[i]));
	return 0;
}
