
#include "pch.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>
using namespace std;

void textCR(string color, string text) {
	color = "0" + color;
	system(("color " + color).c_str());
	system("CLS");
	cout << text << endl;
}

int main()
{
	string cr, txt;
	cout << "Enter one letter |A|B|C|D|E|F|:" << endl;
	cin >> cr;
	cin.clear();
	cin.ignore(1000, '\n');
	cout << "Enter your text:" << endl;
	getline(cin, txt);
	textCR(cr, txt);
}
