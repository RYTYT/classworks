
#include "pch.h"
#include <iostream>
using namespace std;

int min(int a, int b, int c) {
	if (a < b && a < c) {
		return a;
	}
	else if (b < a && b < c) {
		return b;
	}
	else if (c < a && c < b) {
		return c;
	}
}

int main()
{
	int a, b, c;
	cout << "Enter a:" << endl;
	cin >> a;
	cout << "Enter b:" << endl;
	cin >> b;
	cout << "Enter c:" << endl;
	cin >> c;
	int minimal = min(a, b, c);
	cout << "MIN: " << minimal;
	return 0;
}

