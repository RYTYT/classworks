// Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Узнайте свое животное по китайскому календарю.\nВведите год своего рождения:" << endl;
	int year;
	cin >> year;
	switch (year%12) {
	case 4: {
		cout << "Вы Крыса!" << endl;
		break;
	}
	case 5: {
		cout << "Вы Бык!" << endl;
		break;
	}
	case 6: {
		cout << "Вы Тигр!" << endl;
		break;
	}
	case 7: {
		cout << "Вы Кролик!" << endl;
		break;
	}case 8: {
		cout << "Вы Дракон!" << endl;
		break;
	}
	case 9: {
		cout << "Вы Змея!" << endl;
		break;
	}
	case 10: {
		cout << "Вы Лошадь!" << endl;
		break;
	}
	case 11: {
		cout << "Вы Овца!" << endl;
		break;
	}
	case 12: {
		cout << "Вы Обезьяна!" << endl;
		break;
	}
	case 1: {
		cout << "Вы Петух!" << endl;
		break;
	}
	case 2: {
		cout << "Вы Собака!" << endl;
		break;
	}
	case 3: {
		cout << "Вы Свинья!" << endl;
		break;
	}
	default: {
		cout << "Вы Никто! Поздравляем!" << endl;
	}
	}
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
