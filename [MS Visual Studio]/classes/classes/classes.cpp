
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class cat {
private:
	string name;
	int age;
	double weight;
public:
	cat() {
		name = "None";
		age = -1;
		weight = -1.0;
	}
	cat(string name, int age, double weight) {
		this->name = name;
		this->age = age;
		this->weight = weight;
	}
	cat(string n):cat() {
		name = n;
	}; 
	//поискать в инете насчет этого  cat(string n) !--> : <--! инициализация {};
	
	void sayMeow() {
		cout << name << " says MEeeeeOoow!\n";
	}
	int getAge() {
		return age;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	cat cats("Mr.King", 2, 5.0); //создано статически
	cats.sayMeow();
	cat *cat2 = new cat("Pushok", 7, 2.5); //создано динамически
	cat2->sayMeow();

	cat b("Snowman");
	cout << b.getAge();
}
