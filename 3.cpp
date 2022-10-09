#include <stdio.h>
#include <locale.h>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "RU");
	int xf, yf, rf, xs, ys, rs, xsum, ysum, rsum;
	double diag;
	rsum = 0;

	printf("Введите X и Y центра первой окружности\n");
	scanf_s("%i %i", &xf, &yf);

	printf("Введите радиус первой окружности\n");
	scanf_s("%i", &rf);

	printf("Введите X и Y центра второй окружности\n");
	scanf_s("%i %i", &xs, &ys);

	printf("Введите радиус второй окружности\n");
	scanf_s("%i", &rs);

	rsum = rf + rs;
	ysum = abs(yf) + abs(ys);
	xsum = abs(xf) + abs(xs);
	diag = sqrt(xsum * xsum + ysum * ysum);

	if (xf == xs and yf == ys and rf == rs)
	{
		printf("Окружности совпадают");
	}
	else if ((xf == xs and yf == ys and rf > rs) or ((diag + rs) < rf))
	{
		printf("Окружность 2 находится внутри окружности 1, но не пересекает её");
	}
	else if ((xf == xs and yf == ys and rf < rs) or ((diag + rf) < rs))
	{
		printf("Окружность 1 находится внутри окружности 2, но не пересекает её");
	}
	else if (diag > rsum)
	{
		printf("Окружности не пересекаются и не находятся друг в друге");
	}
	else if ((diag == rsum) or ((diag + rs) == rf) or ((diag + rf) == rs))
	{
		printf("Окружности пересекаются в одной точке");
	}
	else if ((diag < rsum) or ((diag + rf) > rs) or ((diag + rs) > rf))
	{
		printf("Окружности пересекаются в двух точках");
	}
	
	return 0;
}