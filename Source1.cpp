#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
	setlocale(0, "");

	int x1, y1, r1, x2, y2, r2;

	printf("������� ���������� � ������ ������ ����������: \n");
	scanf_s("%i %i %i", &x1, &y1, &r1);

	printf("������� ���������� � ������ ������ ����������: \n");
	scanf_s("%i %i %i", &x2, &y2, &r2);

	float AB = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)); // ���������� ����� �������� �����������

	if ((x1 == x2) and (y1 == y2) and (r1 == r2)) {
		printf("���������� ���������.");
	}
	else if (max(r1, r2) > (min(r1, r2) + AB)) {
		printf("���� ���������� ����� ������ ������.");
	}
	else if ((r1 + r2 == AB) or (min(r1, r2) == AB)) {
		printf("���������� ��������.");
	}
	else if (((r1 + r2 > AB) and (r1 < r2) and (r2 < AB + r1)) or ((r1 + r2 > AB) and (r2 < r1) and (r1 < AB + r2))) {
		printf("���������� �������� � ���� ������");
	}
	else {
		printf("���������� �� ������������.");
	}

	return 0;
}