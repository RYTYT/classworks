
#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int n = 7;
	int array[n];
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 11;
	}
	cout << "MAIN:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "| " << array[i] << " | ";
	}
	cout << endl << "-----------------------------------------------------------" << endl;
	cout << "SORTING:";
	int min = 999999999;
	int zamina;
	for (int j = 0; j < n; j++) {
		cout << endl << "-----------------------------------------------------------" << endl;
		cout << " " << j + 1 << ":" << endl;
		for (int k = 0; k < n; k++) {
			if (array[k] <= min) {
				min = array[k];
			}
		}
		zamina = min;
		min = array[j];
		array[j] = zamina;
		for (int i = 0; i < n; i++) {
			cout << "| " << array[i] << " | ";
		}
		cout << endl;
	}
	cout << endl << "END." << endl << endl;

}


/*
int temp = a[i];
a[i] = a[j];
a[j] = temp;
*/