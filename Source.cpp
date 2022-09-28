#include<stdio.h>
#include<math.h>
void main()
{
	float x1, y1, x2, y2, r1, r2, d;
	scanf_s("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &r1, &r2);
	d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	if (d > r1 + r2)
	{
		printf("in a distance from each other");
	}
	else if (d < (r1 - r2))
	{
		printf("One circle is inside another");
	}
	else if (d == r1 + r2)
	{
		printf("intersect at one point, one circle is not inside another");
	}
	else if (d == r1 - r2)
	{
		printf("intersect at one point, one circle is inside another");
	}
	else if (r1 - r2 < d < r1 + r2)
	{
		printf("intersect at two points");
	}
	else { printf("another/unknown situation"); }
}
	