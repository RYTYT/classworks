
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Решение Квадратного Выражения." << endl;
	float a;
	float b;
	float c;
	cout << "Введите a:" << endl;
	cin >> a;
	cout << "Введите b:" << endl;
	cin >> b;
	cout << "Введите c:" << endl;
	cin >> c;
	float D = b * b - 4 * a*c;
	if (D < 0) {
		cout << "Ошибка: Нельзя взять корень от отрицательного числа.";
		return 0;
	}
	float x1 = (-b + sqrt(D)) / (a * 2);
	float x2 = (-b - sqrt(D)) / (a * 2);
	cout << "Первый корень x1: "<< x1 << endl << "Второй корень x2: " << x2 << endl;
	return 0;
}