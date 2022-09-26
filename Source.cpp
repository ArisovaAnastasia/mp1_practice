#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(0, "");

	int x1, y1, r1, x2, y2, r2;
	cout << "Введите координацы центра и радиус первой окружности: " << endl;
	cin >> x1 >> y1 >> r1;

	cout << "Введите координацы центра и радиус второй окружности: " << endl;
	cin >> x2 >> y2 >> r2;

	float AB = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)); // расстояние между центрами окружностей
	cout << AB << endl;

	if ((x1 == x2) and (y1 == y2) and (r1 == r2)) {
		cout << "Окружности совпадают" << endl;
	}
	else if (r1 + r2 < AB) {
		cout << "Окружности не имеют общих точек" << endl;
	}
	else if ((r1 + r2 == AB) or (r1 == AB + r2) or (r2 == AB + r1)) {
		cout << "Окружности касаются" << endl;
	}
	else if (((r1 + r2 > AB) and (r1 < r2) and (r2 < AB + r1)) or ((r1 + r2 > AB) and (r2 < r1) and (r1 < AB + r2))) {
		cout << "Окружности пересекаются в 2-ух точках" << endl;
	}
	else {
		cout << "Окружности не имеют общих точек" << endl;
	}

	return 0;
}