
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Вы зашли в фруктовый магазин.\nКакие фрукты вы хотите купить?" << endl;
	cout << " [1] Яблоки - 25 грн/кг\n [2] Бананы - 30 грн/кг\n [3] Груши - 30 грн/кг\n [4] Киви - 40 грн/кг\n [5] Ананас - 70 грн/кг\n [6] Вишни - 30 грн/кг\n [7] Персики - 50 грн/кг" << endl;
	int choice;
	float kg;
	float price = 0;
	cin >> choice;
	switch (choice) {
	case 1: {
		cout << "Сколько килограмов вам нужно? (1 яблоко - )" << endl;
		cin >> kg;
		price = 25 * kg;
		cout << "Это будет стоить " << price << " грн." << endl;
		break;
	}
	case 2: {
		cout << "Сколько килограмов вам нужно? (1 банан - )" << endl;
		cin >> kg;
		price = 30 * kg;
		cout << "Это будет стоить " << price << " грн." << endl;
		break;
	}
	case 3: {
		cout << "Сколько килограмов вам нужно? (1 груша - )" << endl;
		cin >> kg;
		price = 30 * kg;
		cout << "Это будет стоить " << price << " грн." << endl;
		break;
	}
	case 4: {
		cout << "Сколько килограмов вам нужно? (1 киви - )" << endl;
		cin >> kg;
		price = 40 * kg;
		cout << "Это будет стоить " << price << " грн." << endl;
		break;
	}
	case 5: {
		cout << "Сколько килограмов вам нужно? (1 ананас - )" << endl;
		cin >> kg;
		price = 70 * kg;
		cout << "Это будет стоить " << price << " грн." << endl;
		break;
	}
	case 6: {
		cout << "Сколько килограмов вам нужно? (1 вишня - )" << endl;
		cin >> kg;
		price = 30 * kg;
		cout << "Это будет стоить " << price << " грн." << endl;
		break;
	}
	case 7: {
		cout << "Сколько килограмов вам нужно? (1 персик - )" << endl;
		cin >> kg;
		price = 50 * kg;
		cout << "Это будет стоить " << price << " грн." << endl;
		break;
	}
	default: {
		cout << "В этом магазине сейчас нету того, что вы хотели купить. Вы решили зайти попозже." << endl;
		break;
	}
	}
	return 0;
}