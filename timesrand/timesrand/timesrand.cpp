
#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int array[20];
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		array[i] = rand() % 100;
	}
	
	for (int i = 0; i < 20; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 20; i++) {
		if (array[i] > 50) {
			cout << array[i] << " ";
		}
	}
	cout << endl;
	int n = 0;
	for (int i = 0; i < 20; i++) {
		if (array[i] > 50) {
			n = n + 1;
		}
	}
	cout << n << endl;
	n = 0;
	for (int i = 0; i < 20; i++) {
		n = n + array[i];
	}
	cout << n << endl;
	float arithmetic = (float)n / 20.0;
	cout << arithmetic << endl;

	int min1 = array[0];
	int min2 = array[0];
	for (int i = 0; i < 20; i++) {
		if (min1 > array[i]) {
			min2 = min1;
			min1 = array[i];
		}
	}
	cout << min1 << endl << min2 << endl;

}