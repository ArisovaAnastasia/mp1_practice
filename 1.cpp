#include <stdio.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	int x, y;
	x = 0;
	y = 0;
	printf("������� X � Y \n");
	scanf("%i %i", &x, &y);
	if (x == 0 and y == 0)
	{
		printf("����� ��������� � 0");
	}
	else if (x == 0 and y > 0)
	{
		printf("����� ����� ���������� I � II");
	}
	else if (x == 0 and y < 0)
	{
		printf("����� ����� ���������� III � IV");
	}
	else if (x > 0 and y == 0)
	{
		printf("����� ����� ���������� I � IV");
	}
	else if (x < 0 and y == 0)
	{
		printf("����� ����� ���������� II � III");
	}
	else if (x > 0 and y > 0)
	{
		printf("����� � �������� I");
	}
	else if (x > 0 and y < 0)
	{
		printf("����� � �������� IV");
	}
	else if (x < 0 and y > 0)
	{
		printf("����� � �������� II");
	}
	else if (x < 0 and y < 0)
	{
		printf("����� � �������� III");
	}
}