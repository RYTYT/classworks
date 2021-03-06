
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

void quadExp(float a, float b, float c, float &x1, float &x2) {
	float D = b * b - 4 * a * c;
	if (D < 0) {
	cout << "The equation has no real roots." << endl;
	}
	else if (D == 0) {
		cout << "The equation has only one root:" << endl;
		x1 = -b / (2 * a);
	}
	else if (D > 0) {
		cout << "The equation has two roots:" << endl;
		x1 = (-b + sqrt(D)) / 2 * a;
		x2 = (-b - sqrt(D)) / 2 * a;
	}
	
}

int main()
{
	float a, b, c;
	float kor1, kor2;
	a = 1;
	b = 9;
	c = 5;
	quadExp(a, b, c, kor1, kor2);
	cout << "x1 = " << kor1 << "\nx2 = " << kor2 << endl;
}



/*
int f1(int a) {
	a = a * 2;
	cout << a << endl;
}

void f2(int &a) {
	a = a * 2;
	cout << a << endl;
}

cout << f1(num) << endl;
cout << num << endl;
--------------------------------------------
void swap(int &a, int &b) {
	int c;
	c = a;
	a = b;
	b = c;
}

int r1 = 1, r2 = 2;
	swap(r1, r2);
	cout << r1 << " " << r2 << endl;
--------------------------------------------

*/