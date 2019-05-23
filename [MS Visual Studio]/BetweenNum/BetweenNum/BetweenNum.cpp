
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите целые первое и второе число. Программа выведет вам все числа между ними (исключительно)." << endl;
	int n1;
	int n2;
	cout << "Первое:" << endl;
	cin >> n1;
	cout << "Второе:" << endl;
	cin >> n2;
	int a = n1 - n2;
	int b = n2 - n1;
	if (a > 1) {
		cout << "Ваши числа:" << endl;
		while (n1 > n2+1) {
			n1 = n1 - 1;
			cout << n1 << endl;
		}
	}
	if (b > 1)
		while (n2 > n1+1) {
			cout << "Ваши числа:" << endl;
			n2 = n2 - 1;
			cout << n2 << endl;
	}
	if (b == 0 || a == 0 || b == 1 || a == 1) {
		cout << "Между ними нету ЦЕЛЫХ чисел." << endl;
	}
	return 0;
}

// я немного помучался, чтоб оно предпринимало решения при всех вариантах, но я все еще не уверен, что я учел все варианты.