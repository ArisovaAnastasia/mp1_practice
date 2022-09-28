#include <stdio.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	int x, y, z;
	printf("Введите три числа");
	scanf("%i %i %i", &x, &y, &z);
	if (x > y and y > z)
	{
		printf("Среднее число %i", y);
	}
	else if (x > y and y < z)
	{
		printf("Среднее число %i", z);
	}
	else if (x < y and x > z)
	{
		printf("Среднее число %i", x);
	}
}