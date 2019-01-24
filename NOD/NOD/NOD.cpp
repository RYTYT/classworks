
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Наибольший Общий Делитель(НОД) двух чисел.(Рекомендовано вводить числа от 10 и больше)" << endl;
	int a;
	int b;
	cout << "Введите первое число:" << endl;
	cin >> a;
	cout << "Введите второе число:" << endl;
	cin >> b;
	if (b > a) {
		int q = b;
		b = a;
		a = q;
	}
	int p = 1;
	int r = 0;
	int x = 1;
	while (p > 0) {
		r = 0;
		x = 1;
		while (r <= a) {
			r = b * x;
			x = x + 1;
		}
		p = a - (r - b);
		a = b;
		b = p;
	}
	cout << "НОД этих чисел равен:" << endl << a;
	return 0;
}

/*	Пример:
	A = 564 B = 1024

	1024 = 564*1 + 460;
	564 = 460*1 + 104;
	460 = 104*4 + 44;
	104 = 44*2 + 16;
	44 = 16*2 + 12;
	16 = 12*1 + 4;
	12 = 4*3 + 0;
	НОД = 4.
*/