
#include "pch.h"
#include <iostream>
using namespace std;

int exp(int a, int b) {
	int zapas = a;
	for (int i = 0; i < b; i++) {
		a = a * zapas;
	}
	return a;
}
int main()
{
	int z, r;
	cout << "Enter z:" << endl;
	cin >> z;
	cout << "Enter r:" << endl;
	cin >> r;
	int power = exp(z, r);
	cout << "Exponent from " << z << " in " << r << ":  " << power << endl;
}
