// roulette.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string act;
	cout << "Закрутите рулетку с шариком. \n(Введите [r])" << endl;
	cin >> act;
	if (act == "r") {
		srand(time(NULL));
		int randomNumber = rand() % 50 + 1;
		cout << "Шарик упал на поле " << randomNumber << endl;
		int score = 0;

		 if (randomNumber > 25) {
		 	cout << "Вы выиграли!" << endl;
			score = score + 1;
		 }
		 else {
		 	cout << "Вы проиграли!" << endl;
		 }

		 if (randomNumber >= 10 && randomNumber <= 30) {
			cout << "Вы выиграли!" << endl;
			score = score + 1;
		 }
		 else {
			cout << "Вы проиграли!" << endl;
		 }

		if (randomNumber % 2 == 0) {
			cout << "Вы выиграли!" << endl;
			score = score + 1;
		}
		else {
			cout << "Вы проиграли!" << endl;
		}
		cout << "Вы выиграли в " << score << " играх.";
	}
	else {
		cout << "(Введите [r])";
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
