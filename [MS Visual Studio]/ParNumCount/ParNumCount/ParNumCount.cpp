
#include "pch.h"
#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	const 
	int n = 20;
	int a[n];
	cout << "Программа подсчета парных и непарных чисел в массиве\n\n {";
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 101;
		if (i != 0) {
			cout << ", ";
		}
		cout << a[i];
	}
	cout << "} - массив чисел\n";
	cout << "НАЖМИТЕ ENTER, ЧТОБЫ ПРОДОЛЖИТЬ\n";
	while (true) {
		char c;
		if (getchar() == 13) {
			break;
		}
	}
	int unpar;
	int par;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			par++;
		}
		else {
			unpar++;
		}
	}
	cout << " " << unpar << " - количество парных чисел";
	cout << " " << par << " - количество непарных чисел";
	if (par > unpar) {
		cout << par << ">" << unpar << " --> парных чисел больше\n\n";
	}
	else {
		cout << par << "<" << unpar << " --> непарных чисел больше\n\n";
	}

}
