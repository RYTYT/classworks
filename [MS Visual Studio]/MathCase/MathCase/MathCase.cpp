﻿
#include "pch.h"
#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Універсальна програма вирішення задач." << endl << endl;
	cout << "		ЗАДАЧА" << endl;
	cout << "У першій школі a учнів, у другій - на b учнів менше, ніж у першій.\nУ третій на 119 учнів менше, ніж у другій.\nСкільки учнів у третій школі, якщо a і b - довільні цілі числа, які вам треба ввести." << endl;
	cout << "(ПРИМІТКА: b повинне бути більше за 119; a повинне бути більше за b+119. Інакше будуть людські втрати)" << endl << endl;
	int a, b, c, all;
	cout << " Введіть число a:" << endl;
	cin >> a;
	cout << " Введіть число b:" << endl;
	cin >> b;
	cout << "\n 	РОЗВ'ЯЗАННЯ\n  УМОВА" << endl;
	cout << "Перша школа - " << a << " учн." << endl;
	cout << "Друга школа - ?, на " << b << " учн. менше, ніж у першій" << endl;
	cout << "Третя школа - ?, на 119 учн. менше, ніж у другій" << endl;
	
	cout << endl;
	//Скласти вираз та обчислити, якщо а = 1758, b = 95.
	int v;
	do {
	cout << "	ОПЦІЇ:" << endl;
	cout << " 1 - Показати вираз.\n 2 - Скільки учнів в школах?\n Будь-яка клавіша - ВИХІД.\n" << endl;
	cin >> v;
		switch (v) {
		case 1:
			cout << "	ВИРАЗ" << endl;
			cout << "a - b - 119 = c" << endl;
			cout << a << " - " << b << " - 119 = "; 
			c = 119;
			b = a - b;
			c = b - c;
			all = a + b + c;
			cout << c << "(уч.) - у третій школі." << endl << endl;
			break;
		case 2:
			cout << " У першій школі - " << a << " учнів;\n У другій школі - " << b << " учнів;\n У третій школі - " << c << " учнів;\n Усього - " << all << " учнів." << endl << endl;
			break;
		default:
			cout << "  ВИХІД..." << endl << endl;
			return 0;
			break;
		}
	} while (v == 1 || v == 2);

	//Надо установить --------------- линии разделяющие диалоги.


}
