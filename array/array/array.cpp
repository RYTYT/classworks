
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int arr[20];
	for (int i = 0; i < 20; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < 20; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}
