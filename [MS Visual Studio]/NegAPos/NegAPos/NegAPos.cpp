
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Вывод чисел между положительным и отрицательным числом." << endl;
	cout << "Введите целое число:" << endl;
	int x;
	cin >> x;
	int d = (x - (-x)) + 1;
	if (x > 0) {
		x = -x;
	}
	else if (x == 0) {
		cout << "Ваше число:" << endl << x << endl;
		return 0;
	}
	cout << "Ваши числа:" << endl;
	for (int i = 0; i <= d; i = i + 1); {
		cout << x << endl;
		x = x + 1;
	}
	return 0;
}
