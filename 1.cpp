#include <stdio.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	int x, y;
	x = 0;
	y = 0;
	printf("Введите X и Y \n");
	scanf("%i %i", &x, &y);
	if (x == 0 and y == 0)
	{
		printf("Точка находится в 0");
	}
	else if (x == 0 and y > 0)
	{
		printf("Точка между четвертями I и II");
	}
	else if (x == 0 and y < 0)
	{
		printf("Точка между четвертями III и IV");
	}
	else if (x > 0 and y == 0)
	{
		printf("Точка между четвертями I и IV");
	}
	else if (x < 0 and y == 0)
	{
		printf("Точка между четвертями II и III");
	}
	else if (x > 0 and y > 0)
	{
		printf("Точка в четверти I");
	}
	else if (x > 0 and y < 0)
	{
		printf("Точка в четверти IV");
	}
	else if (x < 0 and y > 0)
	{
		printf("Точка в четверти II");
	}
	else if (x < 0 and y < 0)
	{
		printf("Точка в четверти III");
	}
}