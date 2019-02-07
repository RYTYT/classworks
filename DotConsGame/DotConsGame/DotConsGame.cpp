
#include "pch.h"
#include <iostream>
#include <cwchar>
#include <windows.h>
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
			field[i][j] = '+';
			cout << field[i][j];
		}
		cout << endl;
	}
}

int main()
{
	setFontSize(20);
	char field[10][10];
	drawField(field, 10);
	
}