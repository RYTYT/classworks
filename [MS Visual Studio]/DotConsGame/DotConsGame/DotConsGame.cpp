
#include "pch.h"
#include <iostream>
#include <cwchar>
#include <windows.h>
#include <conio.h>
using namespace std;

void setFontSize(int FontSize)
{
	CONSOLE_FONT_INFOEX info = { 0 };
	info.cbSize = sizeof(info);
	info.dwFontSize.Y = FontSize; // leave X as zero
	info.FontWeight = FW_NORMAL;
	wcscpy_s(info.FaceName, L"Lucida Console");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), NULL, &info);
}

void drawField(char(*field)[10], int H) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < H; j++) {
			field[i][j] = '.';
		}
	}
}

void TruEDraw(char(*field)[10], int H) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < H; j++) {
			cout << field[i][j];
		}
		cout << endl;
	}
}

int moveFun() {
	char field[10][10];
	int a = 1;
	int b = 1;
	drawField(field, 10);
	field[a][b] = 'o';
	TruEDraw(field, 10);
	int move;
	while (true) {
		field[a][b] = 'o';
		move = _getch();
		switch (move) {
		case 119: {
			field[a][b] = '.';
			a = a - 1;
			break;
		}
		case 97: {
			field[a][b] = '.';
			b = b - 1;
			break;
		}
		case 115: {
			field[a][b] = '.';
			a = a + 1;
			break;
		}
		case 100: {
			field[a][b] = '.';
			b = b + 1;
			break;
		}
		case 27: {
			return 0;
			break;
		}
		default: {
			break;
		}
		}
		system("CLS");
		TruEDraw(field, 10);
	}
}

int main()
{
	char field[10][10];
	moveFun();
	

	
}

/*
while (true) {
	move = _getch();
	cin.clear();
	cin.ignore(100, '\n');
	cout << move;
}
*/