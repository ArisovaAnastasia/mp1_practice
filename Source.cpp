#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(0, "");

	int x1, y1, r1, x2, y2, r2;
	cout << "������� ���������� ������ � ������ ������ ����������: " << endl;
	cin >> x1 >> y1 >> r1;

	cout << "������� ���������� ������ � ������ ������ ����������: " << endl;
	cin >> x2 >> y2 >> r2;

	float AB = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)); // ���������� ����� �������� �����������
	cout << AB << endl;

	if ((x1 == x2) and (y1 == y2) and (r1 == r2)) {
		cout << "���������� ���������" << endl;
	}
	else if (r1 + r2 < AB) {
		cout << "���������� �� ����� ����� �����" << endl;
	}
	else if ((r1 + r2 == AB) or (r1 == AB + r2) or (r2 == AB + r1)) {
		cout << "���������� ��������" << endl;
	}
	else if (((r1 + r2 > AB) and (r1 < r2) and (r2 < AB + r1)) or ((r1 + r2 > AB) and (r2 < r1) and (r1 < AB + r2))) {
		cout << "���������� ������������ � 2-�� ������" << endl;
	}
	else {
		cout << "���������� �� ����� ����� �����" << endl;
	}

	return 0;
}