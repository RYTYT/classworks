
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

int a = 19;
while (a < 20) {
	a++;
}
while (a <= 30 && a >= 20) {
	cout << a << endl;
	a++;
}
}
