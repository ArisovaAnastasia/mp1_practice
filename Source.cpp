#include<stdio.h>
#include<math.h>
#include<cmath>
void main()
{
	float x1, y1, x2, y2, r1, r2, d;
	printf("Write x1 for first circle:");
	scanf_s("%f", &x1);
	printf("%f \n", x1);
	printf("Write y1 for first circle:");
	scanf_s("%f", &y1);
	printf("%f \n", y1);
	printf("Write r1 for first circle:");
	scanf_s("%f", &r1);
	printf("%f \n", r1);
	printf("Write x2 for second circle:");
	scanf_s("%f", &x2);
	printf("%f \n", x2);
	printf("Write y2 for second circle:");
	scanf_s("%f", &y2);
	printf("%f \n", y2);
	printf("Write r2 for second circle:");
	scanf_s("%f", &r2);
	printf("%f \n", r2);
	d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	if (d > r1 + r2)
	{
		printf("in a distance from each other");
	}
	else if (d < abs(r1 - r2))
	{
		printf("One circle is inside another");
	}
	else if (d == r1 + r2)
	{
		printf("intersect at one point, one circle is not inside another");
	}
	else if (d == abs(r1 - r2))
	{
		printf("intersect at one point, one circle is inside another");
	}
	else if ((abs(r1 - r2) < d) || (d < r1 + r2))
	{
		printf("intersect at two points");
	}
	else { printf("another/unknown situation"); }
}
	