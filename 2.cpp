#include <stdio.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	int x, y, z;
	printf("������� ��� �����");
	scanf("%i %i %i", &x, &y, &z);
	if (x > y and y > z)
	{
		printf("������� ����� %i", y);
	}
	else if (x > y and y < z)
	{
		printf("������� ����� %i", z);
	}
	else if (x < y and x > z)
	{
		printf("������� ����� %i", x);
	}
}