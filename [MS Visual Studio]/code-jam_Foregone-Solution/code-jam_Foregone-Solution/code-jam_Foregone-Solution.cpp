
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string N;
		cin >> N;
		for (int j = 0; j < N.length(); j++) {
			cout << N[j] << endl;
		}
	}
}

/*
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		int n;
		int a = 0;
		int b = 0;
		int j = 1;
		int N1 = N;
		while (N != 0) {
			n = N % 10;
			if (n == 4) {
				b = b + j * 1;
				a = N1 - b;
			}
			N = N / 10;
			j = j * 10;
		}
		cout << "Case #" << i + 1 << ": " << a << " " << b << endl;
	}
*/