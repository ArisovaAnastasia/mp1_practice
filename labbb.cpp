#include<stdio.h>
#include<math.h>

int main() {
	int x1, x2, y2, y1, r1, r2;
	double l;
	scanf_s("%i%i%i%i%i%i", &x1, &x2, &y1, &y2, &r1, &r2);
	l = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	if (l < r1 + r2)
	{ printf("2 tochki peresechenia"); }
	else if (r1 > r2 + l || r2 > l + r1 || (x1 == x2 && y1 == y2))
	{
		printf("odna okrygnost v drygou");
	}
	else if (r1+r2 == l)
	{ printf("1 tochka peresechenia"); }
	else { printf("net peresichenia"); }
}