
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class pencil {
private:
	string company;
	double price;
	int num;
	string color;
	float diamt_mm;
public:
	pencil() {
		company = "None";
		price = 1.50;
		num = 1;
		color = "ordinary gray";
		diamt_mm = 7.0;
	}
	pencil(string company, double price, int num, string color, float diamt_mm) {
		this->company = company;
		this->price = price;
		this->num = num;
		this->color = color;
		this->diamt_mm = diamt_mm;
	}

	void add_pencil() {
	cout << "Pencils Company\n";
	cin >> company;
	cout << "Pencils Price\n";
	cin >> price;
	cout << "Pencils Number\n";
	cin >> num;
	cout << "Pencils Color\n";
	cin >> color;
	cout << "Pencils Diameter\n";
	cin >> diamt_mm;
}
	
};



class stat_shop {
private:
	string name;
	int lines;
	int spacePRshelf;
	int shelfLevels;
	double CRTcash;
	int pencil_packs;
	pencil *pencils = new pencil[pencil_packs];
public:
	stat_shop() {
		name = "Stationary Shop";
		lines = 5;
		spacePRshelf = 20;
		shelfLevels = 5;
		CRTcash = 0.00;
		pencil_packs = 10;
		for (int i = 0; i < pencil_packs; i++) {
			pencils[i] = pencil();
		}
}
	~stat_shop() {
		delete[]pencils;
	}

	void pencils_supply() {
		for (int i = 0; i < pencil_packs; i++) {
			pencils[i].add_pencil();
		}
	}
	
};

int main()
{
   

}
