
#include "pch.h"
#include <iostream>
#include <string>;
using namespace std;

string sayHello(string name);

int main()
{
	cout << "Enter your name:" << endl;
	string name;
	cin >> name;
	cout << "-----------------------------------------------------------" << endl;
	sayHello(name);
	cout << name;
	//cout << sayHello(name);
}

string sayHello(string name) {
	name = name + "!";
	cout << "Hello, " << name << endl;
	return name;
}
