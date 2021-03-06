
#include "pch.h"
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const
		int n = 20;
	int a[n];
	cout << "\n{";
	for (int i = 0; i < n; i++) {
		a[i] = -40 + rand() % 91;
		if (i != 0) {
			cout << "C, ";
		}
		cout << a[i];
	}
	cout << "} - temperature per 20 days\n";

	for (int i = 0; i < n; i++) {
		cout << " d" << i+1;
		if (i < n-1) {
			cout << ", ";
		}
	}
	cout << "\n\n";

	int b;
	int change = 0;
	int day1 = 0;
	for (int i = 0; i < n - 1; i++) {
		b = abs(a[i + 1] - a[i]);
		if (change < b) {
			change = b;
			day1 = i+1;
		}
	}
	cout << change << "C - greatest temperature number change from day " << day1 << " to " << day1 + 1 << "\n";
}
