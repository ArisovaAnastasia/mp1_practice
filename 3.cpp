#include <stdio.h>
#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "rus");
	int xf, yf, rf, xs, ys, rs, xsum, ysum, rsum;
	double diag;
	rsum = 0;
	printf("������� X � Y ������ ����������\n");
	scanf("%i %i", &xf, &yf);
	printf("������� ������ ������ ����������\n");
	scanf("%i", &rf);
	printf("������� X � Y ������ ����������\n");
	scanf("%i %i", &xs, &ys);
	printf("������� ������ ������ ����������\n");
	scanf("%i", &rs);
	rsum = rf + rs;
	ysum = abs(yf) + abs(ys);
	xsum = abs(xf) + abs(xs);
	diag = sqrt(xsum * xsum + ysum * ysum);

	if (xf == xs and yf == ys and rf == rs)
	{
		printf("���������� ���������");
	}

	else if (xf == xs and yf == ys and rf > rs)
	{
		printf("���������� 2 � ���������� 1");
	}
	else if (xf == xs and yf == ys and rf < rs)
	{
		printf("���������� 1 � ���������� 2");
	}
	else if ((diag < rf) and ((diag + rs) < rf))
	{
		printf("���������� 2 � ���������� 1");
	}
	else if ((diag < rs) and ((diag + rf) < rs))
	{
		printf("���������� 1 � ���������� 2");
	}

	else if ((diag == rsum))
	{
		printf("���������� ������������ � ����� �����");
	}
	else if (diag < rsum)
	{
		printf("���������� ������������ � ���� ������");
	}

	else
	{
		printf("���������� �� ������������");
	}

}