
#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

void FileToArray(ifstream &ifs, int *massif, int num) {
	for (int i = 0; i < num; i++) {
		ifs >> massif[i];
	}
}

void MinAndMax(int *massif, int num) {
	int Min = 0;
	int Max = 0;
	for (int i = 0; i < num; i++) {
		if (massif[i] <= Min) {
			Min = massif[i];
		}
		if (massif[i] >= Max) {
			Max = massif[i];
		}
	}
	cout << "Max temperature - " << Max << endl;
	cout << "Max temperature - " << Min << endl;
}

int main()
{
	const
	int days = 31;
	ifstream txtMT;
	txtMT.open("C:\\Users\\Admin\\source\\repos\\Misha Folder\\[MS Visual Studio]\\[MS VS textfiles]\\temperatures.txt");
	int *tempFM = new int[days];
	FileToArray(txtMT, tempFM, days);

	MinAndMax(tempFM, days);

	txtMT.close();
}
