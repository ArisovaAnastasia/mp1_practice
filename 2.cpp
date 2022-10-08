#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	int x, y, z;
	printf("Введите 3 числа \n");
	scanf_s("%i %i %i", &x, &y, &z);
	if (x == y and y == z)
	{
		printf("Медианой является число x");
	}
	else if (x == y)
	{
		printf("Медианой является число %i", x);
	}
	else if (x == z)
	{
		printf("Медианой является число %i", x);
	}
	else if (z == y)
	{
		printf("Медианой является число %i", y);
	}
	else if ((x > y and y > z) or (z > y and y > x))
	{
		printf("Медианой является число %i", y);
	}
	else if ((x > z and z > y) or (y > z and z > x))
	{
		printf("Медианой является число %i", z);
	}
	else if ((y > x and x > z) or (z > x and x > y))
	{
		printf("Медианой является число %i", x);
	}
	return 0;
}