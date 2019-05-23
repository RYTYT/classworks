
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Программа вычисляет сумму всех чисел от 1 до вашего числа." << endl << "Введите число:" << endl;
	int n;
	cin >> n;
	int p = 0;
	while (n > 0) {
		p = p + n;
		n = n - 1;
	}
	cout << "Сумма:" << p << endl;
	return 0;
}
