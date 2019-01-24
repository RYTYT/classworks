
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int *arr = new int[n];
	//new - оператор выделения памяти
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
		cout << &(arr[i]) << endl;
	}
	delete[] arr;

}


/*
1)
int a = 10;
int *p = &a;
// * - указывает, что это спец. переменная-указатель
// & - операция взятия адреса
// ячейки размеров на 4 байта
// при выделении памяти, между адресами каждой ячейки в масиве будет 4 байта
cout << p << endl;

*/