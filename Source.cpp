#include <stdio.h>
#include <cmath>


void main()
{
	float x1, x2, y1, y2, r1, r2;
	float d;
	printf("X1,Y1 R1:");
	scanf_s("%f, %f, %f", &x1, &y1, &r1);
	printf("X2,Y2 R2:");
	scanf_s("%f, %f, %f", &x2, &y2, &r2);

	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	if (d == 0 && r1 == r2)
	{
		printf("complete match");
	}

	else if (x1 == x2 && y1 == y2)
	{
		printf("the coincidence of the centers of the circle");
	}

	else if (d > (r1 + r2))
	{
		printf("no intersections");
	}
	else
	{
		if (d < (r2 - r1) || d < (r1 - r2))
		{
			printf("one circle lies inside the other, but they do not intersect");
		}
		else if (d == (r2 - r1) || d == (r1 - r2))
		{
			printf("a small circle lies inside a large one, but has one common point with it");
		}
		else if ((r2 - r1) < d < (r2 + r1) || (r1 - r2) < d < (r2 + r1))
		{
			printf("circles intersect at two points and are called intersecting");
		}
		else if (d == (r1 + r2))
		{
			printf("circles have one common point, and the center of one of them is located outside the second circle");
		}

	}
}