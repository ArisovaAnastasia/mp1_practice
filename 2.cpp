#include <stdio.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	int x, y, z;
	double a;
	a = 0;
	printf("������� ��� ����� \n");
	scanf("%i %i %i", &x, &y, &z);
	if (x == y and y == z)
	{
		printf("������� ����� = %i", x);
	}
	else if ((x == y and x > z) or (x == y and x < z))
	{
		a = (x + z) / 2.0;
		printf("������� ����� = %f", a);
	}
	else if ((x == z and y > z) or (x == z and y < z))
	{
		a = (y + z) / 2.0;
		printf("������� ����� = %f", a);
	}
	else if ((z == y and x > z) or (z == y and x < z))
	{
		a = (x + z) / 2.0;
		printf("������� ����� = %f", a);
	}
	else if ((x > y and y > z) or (z > y and y > x))
	{
		printf("������� ����� = %i", y);
	}
	else if ((y > x and x > z) or (z > x and x > y))
	{
		printf("������� ����� = %i", x);
	}
	else if ((x > z and z > y) or (y > z and z > x))
	{
		printf("������� ����� = %i", z);
	}
}