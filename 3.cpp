#include <stdio.h>
#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "rus");
	int xf, yf, rf, xs, ys, rs, xsum, ysum, rsum;
	double diag;
	rsum = 0;
	printf("Введите X и Y первой окружности\n");
	scanf("%i %i", &xf, &yf);
	printf("Введите радиус первой окружности\n");
	scanf("%i", &rf);
	printf("Введите X и Y второй окружности\n");
	scanf("%i %i", &xs, &ys);
	printf("Введите радиус второй окружности\n");
	scanf("%i", &rs);
	rsum = rf + rs;
	ysum = abs(yf) + abs(ys);
	xsum = abs(xf) + abs(xs);
	diag = sqrt(xsum * xsum + ysum * ysum);

	if (xf == xs and yf == ys and rf == rs)
	{
		printf("Окружности совпадают");
	}

	else if (xf == xs and yf == ys and rf > rs)
	{
		printf("Окружность 2 в окружности 1");
	}
	else if (xf == xs and yf == ys and rf < rs)
	{
		printf("Окружность 1 в окружности 2");
	}
	else if ((diag < rf) and ((diag + rs) < rf))
	{
		printf("Окружность 2 в окружности 1");
	}
	else if ((diag < rs) and ((diag + rf) < rs))
	{
		printf("Окружность 1 в окружности 2");
	}

	else if ((diag == rsum))
	{
		printf("Окружности пересекаются в одной точке");
	}
	else if (diag < rsum)
	{
		printf("Окружности пересекаются в двух точках");
	}

	else
	{
		printf("Окружности не пересекаются");
	}

}