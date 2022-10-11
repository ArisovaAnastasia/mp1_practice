#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RU");
	int x, y;
	x = 0;
	y = 0;
	printf("Введите значения X и Y\n");
	scanf_s("%i %i", &x, &y);
	if (x == 0 and y == 0)
	{
		printf("Точка находится в 0");
	}
	else if (x == 0 and y > 0)
	{
		printf("Точка находится между I и II четвертями");
	}
	else if (x == 0 and y < 0)
	{
		printf("Точка находится между III и IV четвертями");
	}
	else if (x > 0 and y == 0)
	{
		printf("Точка находится между I и IV четвертями");
	}
	else if (x < 0 and y == 0)
	{
		printf("Точка находится между II и III четвертями");
	}
	else if (x > 0 and y > 0)
	{
		printf("Точка находится в четверти I");
	}
	else if (x > 0 and y < 0)
	{
		printf("Точка находится в четверти IV");
	}
	else if (x < 0 and y > 0)
	{
		printf("Точка находится в четверти II");
	}
	else if (x < 0 and y < 0)
	{
		printf("Точка находится в четверти III");
	}
	return 0;
}