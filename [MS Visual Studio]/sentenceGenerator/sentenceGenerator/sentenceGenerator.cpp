// sentenceGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	string caract[3]{ "Catman","Wendy","Bonder" };
	string opt1[2]{ "chess", "cards" };
	string opt2[2]{ "plenty","not many" };
	string opt3[2]{ "funny","annoying" };

	int caratc_1 = rand() % 3;
	int caract_2 = rand() % 3;
	int winner = rand() % 2;

	int explan_opt = rand() % 2;

	string action[3]{ caract[caratc_1] + " playing " + opt1[explan_opt] + " with " + caract[caract_2] + ". Looks like " + caract[winner] + " is winning.",
		caract[caratc_1] + " went to " + caract[caract_2] + "'s party. There are " + opt2[explan_opt] + " people on the party.",
		caract[caratc_1] + " telling jokes to " + caract[caract_2] + ". " + caract[caract_2] + " finds them " + opt3[explan_opt] + "." };

	int variant = rand() % 3;

	cout << action[variant] << endl;
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
