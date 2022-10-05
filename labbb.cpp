#include<stdio.h>
#include<math.h>

int main() {
	int x1, x2, y2, y1, r1, r2;
	double l;
	printf(" vvediti koordinati 1 okrygnosti , koordinari 2 okrygnosti i ih radiusi");
	scanf_s("%i%i%i%i%i%i", &x1, &y1, &x2, &y2, &r1, &r2);
	l = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	if (r1 > r2 + l || r2 > l + r1 || (x1 == x2 && y1 == y2))
	{
		printf("odna okrygnost v drygou");
	}
	else if (r1 + r2 == l || r1 - r2 == l || r2 - r2 == l)
	{
		printf("1 tochka peresechenia");
	}
	else if (l < r1 + r2)
	{
		printf("2 tochki peresechenia");
	}
	else { printf("net peresichenia"); }
}
