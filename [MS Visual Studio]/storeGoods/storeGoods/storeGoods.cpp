
#include "pch.h"
#include <iostream>
#include<Windows.h>
#include <string>
using namespace std;

struct prodt {
	string name;
	float price;
	int count;
};

void Add(prodt a[150], int &size) {
	cout << "Adding:\n";
	cout << "Name of product:\n";
	cin >> a[size].name;
	cout << "Price:\n";
	cin >> a[size].price;
	cout << "Number:\n";
	cin >> a[size].count;

	size++;
}

void Print(prodt goods[150], int size) {
	cout << " ----------------------------------------------\n";
	cout << "|     NAME      |     PRICE     |     COUNT     |\n";
	for (int i = 0; i < size; i++) {
		cout << "|";
		cout.width(15);
		cout << goods[i].name << "|";
		cout.width(15);
		cout << goods[i].price << "|";
		cout.width(15);
		cout << goods[i].count << "|\n";
	}
	cout << " ----------------------------------------------\n";
}

int main()
{

	prodt goods[150];
	int size = 0;
	while (true) {
		int menu;
		cout << "Menu:\n1. Add\n2. Show list\n\n >";
		cin >> menu;

		if (menu == 1) {
			Add(goods, size);
			cout << endl;
		}
		else if (menu == 2) {
			Print(goods, size);
			cout << endl;
		}
		else {
			break;
		}
	}
}
