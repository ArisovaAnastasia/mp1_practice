#include <stdio.h>
#include <cmath>

int main()
{
	float x1, x2, y1, y2, r1, r2;

	scanf_s("%f %f %f", &x1, &y1, &r1);
	scanf_s("%f %f %f", &x2, &y2, &r2);

	if (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) > (r1 + r2))
	{printf("net peresecheniy");}
	else
	{
		if (x1 == x2 && y1 == y2)
		{printf("Odna v drugoy");}
		else if (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) == (r1 + r2))
		{printf("1 tochka peres");}
		else
		{printf("2 tochki peres");}
	}
}