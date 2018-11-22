// input-output.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Площадь треуголника" << endl;
	cout << "Введите первую сторону:" << endl;
	float a;
	cin >> a;
	cout << "Введите вторую сторону:" << endl;
	float b;
	cin >> b;
	cout << "Введите третью сторону:" << endl;
	float c;
	cin >> c;
	float p = (a+b+c)/2;
	cout << "Полпериметр: " << p << endl;
	float h = (2 * sqrt(p*(p - a)*(p - b)*(p - c))) / a;
	cout << "Высота: " << h << endl;
	cout << "Площадь: " << (a*h) / 2;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
