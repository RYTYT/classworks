
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	cout << "Hi! This is CounterOfIMDb or just COIMDb.\n I'll count all rates and numbers about movies.\n After this can VIEW a few STATISTICS about Rates.\   So should we START?\n" << endl;
	int menumain;
	do {
	cout << " 1 - START\n 2 - DETAILS\n 3 - EXIT" << endl;
	cin >> menumain;
	cout << endl;
	switch (menumain) {
		case 1:
		cout << "	STARTING...\n\nCounting is hard, especially when you need to count 907679 numbers, so\n\n	Please Wait...\n" << endl;
		break;
		case 2:
		cout << "	DETAILS\n\n";
		cout << " I will count:\n 1. How many movies have average rate higher than 8.\n 2. How many movies have average rate lower than 3.\n 3. Average rate of all movies in dataset.\n You will be able to chose to VIEW one of STATISTICS.\n There you will be also able to return to MAIN MENU.\n" << endl;
		break;
		case 3:
		cout << "	EXITING...\n\n";
		return 0;
		break;
		default:
		cout << "ERROR" << endl;
		return 0;
		break;
	}
	} while (menumain != 1);

	const int size = 907679;
	ifstream ifs;
	ifs.open("C:\\Users\\ASUS\\Documents\\films.tsv");
	// 1)
	string filmnum;
	int ratenum;
	float rate[size];
	for (int i = 0; i < size; i++) {
		ifs >> filmnum;
		ifs >> rate[i];
		ifs >> ratenum;
	}
	// 2), 3) and 4)
	int higher8 = 0;
	int lower3 = 0;
	float allrates = 0;
	for (int i = 0; i < size; i++) {
		if (rate[i] > 8.0) {
			higher8++;
		}
		else if (rate[i] < 3.0) {
			lower3 = lower3 + 1;
		}
		allrates = allrates + rate[i];
	}
	float AvRate = allrates / size;
	ifs.close();

	int stat;
	do {
		cout << "	VIEW STATISTICS\n\n";
		cout << " 1. How many movies have average rate higher than 8.\n 2. How many movies have average rate lower than 3.\n 3. Average rate of all movies in dataset.\n 4. " << endl;
		cin >> stat;
		switch (stat) {
		case 1:
			cout << " There are " << higher8 << " movies that have average rate higher than 8." << endl << endl;
			break;
		case 2:
			cout << " There are " << lower3 << " movies that have average rate lower than 3." << endl << endl;
			break;
		case 3:
			cout << "  Average rate of ALL movies - " << AvRate << endl << endl;
			break;
		default:
			cout << "ERROR" << endl;
			return 0;
		}
	} while ();
	
	

	// 5)
}

