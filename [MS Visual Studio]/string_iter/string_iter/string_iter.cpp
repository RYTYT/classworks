
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (a[i]>=97 && a[i]<=122) {
			a[i] -= 32;
		}
	}
	cout << a << endl;


}

/*
string a = "hello";
cout << a[0] << a[1] << a[2] << a[3] << endl;
int a_size = a.length();
cout << a_size << endl;
	for (int i = 0; i < a_size; i++) {
		cout << a[i] << endl;
	}
*/