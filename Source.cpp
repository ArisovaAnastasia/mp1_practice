#include<stdio.h>
#include<math.h>
void main() {
	int x1, x2, y1, y2, r1, r2;
	scanf_s("%i,%i,%i,%i,%i,%i", &x1, &x2, &y1, &y2, &r1, &r2);
	if (((r2 + r1) > (abs(x2 - x1))) && ((r2 + r1) > (abs(y2 - y1))))
	{
		printf("Окружности пересекаются");
	}
	else if (((r1+r2)<(abs(x2-x1))) && ((r1+r2)<(abs(y2-y1))))
	{
		printf("Окружности не пересекаются ");

	}
	else
	{
		printf(" Окружности совпадают");
	}
}