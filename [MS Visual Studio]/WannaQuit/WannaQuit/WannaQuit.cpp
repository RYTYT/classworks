
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Do you want to exit?" << endl;
	string answ;
	cin >> answ;
	while (answ != "Yes" && answ != "yes") {
		cout << "Do you wanna quit?" << endl;
		cin >> answ;
	}
	return 0;

}

