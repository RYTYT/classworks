
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите число. Программа выведет вам сумму всех чисел до него." << endl;
	int n;
	int i = 0;
	cin >> n;
	for (n; n > 0; n--) {
		i = i + n;
		cout << n;
		if (n > 1) {
			cout << " + ";
		}
		
	}
	cout << endl << "Ваша сумма равна: " << i << endl;
}