
#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	for (int i = 0, mass[10]; i < 10; mass[i] = rand() % 46 - 10, cout << mass[i++] << endl);


}
