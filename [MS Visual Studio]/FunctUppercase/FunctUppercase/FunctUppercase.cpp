
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

string cap(string a) {
	int i = 1;
		if (a[i] >= 97 && a[i] <= 122) {
			a[i] = a[i] - 32;
		}
	}
	return a;
}

int main()
{
	string word;
	cout << "Enter a word:" << endl;
	cin >> word;
	word = cap(word);
	cout << word;



}
