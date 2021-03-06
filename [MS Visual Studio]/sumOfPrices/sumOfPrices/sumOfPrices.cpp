
#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

const
int n = 12;

int *summa(int *arr1,int *arr2, int t) {
	int *arr = new int [t];
	for (int i = 0; i < t; i++) {
		arr[i] = arr1[i] + arr2[i];
	}
	return arr;
}
void coutIt(int *arr, int n, string nazva) {
	cout << nazva << " = { ";
	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i < (n-1)) {
			cout << ", ";
		}
	}
	cout << " }\n";
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
  // Продавец продавал шаурму и сосиски в тесте один год. За каждый месяц он продавал шаурмы на 3000-6000 грн. и сос. в тесте на 1000-3000 грн. Сделать массив с общим заработком торговца за 12 месяцев.
	

	int eda1[n];
	int eda2[n];
	for (int i = 0; i < n; i++) {
		eda1[i] = 3000 + (rand() % 3001);
		eda2[i] = 1000 + (rand() % 2001);
	}
	coutIt(eda1, n, "Продано шаурмы за месяц");
	coutIt(eda2, n, "Продано сосисок в тесте за месяц");

	int *salary = summa(eda1, eda2, n);
	coutIt(salary, n, "Общий Заработок");

	return 0;
}
