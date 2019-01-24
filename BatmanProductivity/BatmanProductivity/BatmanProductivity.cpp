
#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	srand(time(NULL));
	string month[12] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC" };
	int year = rand() % 40 + 1939;

	int WORK[12];
	for (int i = 0; i < 12; i++) {
		int crimes = rand() % 60;
		WORK[i] = crimes;
	}

	cout << " Catched criminals data:	" << endl;
	cout << " YEAR: " << year << endl;
	for (int i = 0; i < 12; i++) {
		cout << "	" << month[i] << " - " << WORK[i] << endl;
	}
	
	int ALL = 0;
	for (int i = 0; i < 12; i++) {
		ALL = ALL + WORK[i];
	}
	cout << " Total - " << ALL << endl << endl;

	int manycrimes = 0;
	string hardmonth;
	for (int i = 0; i < 12; i++) {
		if (WORK[i] == manycrimes) {
			hardmonth = hardmonth + ", " + month[i];
		}
		if (WORK[i] > manycrimes) {
			manycrimes = WORK[i];
			hardmonth = month[i];
		}
	}
	cout << " Most active month: " << hardmonth << " - " << manycrimes << endl;

}
