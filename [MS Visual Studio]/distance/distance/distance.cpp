
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x2, x1, y1, y2;
	cout << "Посчитайте расстояния отрезка \n Введите координаты первой точки: " << endl;
	cin >> x1;
	cin >> y1;
	cout << "Введите координаты второй точки: " << endl;
	cin >> x2;
	cin >> y2;
	cout << "Расстояние вашего отрезка = " << sqrt(pow((x2 - x1), 2) + pow(y2 - y1, 2));
}
