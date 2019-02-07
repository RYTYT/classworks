// RainbowConsole.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <Windows.h>
using namespace std;
enum ConsoleColor {
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};


int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "rus");
	system("color F0");
	SetConsoleTextAttribute(hConsole, (WORD)((White << 4) | Red));
	printf("R");
	SetConsoleTextAttribute(hConsole, (WORD)((White << 4) | LightRed));
	printf("A");
	SetConsoleTextAttribute(hConsole, (WORD)((White << 4) | Yellow));
	printf("I");
	SetConsoleTextAttribute(hConsole, (WORD)((White << 4) | Green));
	printf("N");
	SetConsoleTextAttribute(hConsole, (WORD)((White << 4) | LightBlue));
	printf("B");
	SetConsoleTextAttribute(hConsole, (WORD)((White << 4) | Blue));
	printf("O");
	SetConsoleTextAttribute(hConsole, (WORD)((White << 4) | Magenta));
	printf("W");
	SetConsoleTextAttribute(hConsole, (WORD)((White << 4) | Black));
	cout << " CONSOLE!" << endl;
	cout << "Пользователь, виберите цвет фона:\n 1 - Темно-Красный\n 2 - Красный\n 3 - Желтый\n 4 - Зеленый\n 5 - Голубой\n 6 - Синий\n 7 - Фиолетовый\n 8 - Черный\n 9 - Белый" << endl;
	int bg;
	cin >> bg;
	cout << "Пользователь, выберите цвет шрифт:\n 1 - Темно-Красный\n 2 - Красный\n 3 - Желтый\n 4 - Зеленый\n 5 - Голубой\n 6 - Синий\n 7 - Фиолетовый\n 8 - Черный\n 9 - Белый" << endl;
	int text;
	cin >> text;
	cout << "Спасибо, Пользователь. Я прочитаю вам отрывок из интерактивного комикса PREQUEL -or- Making A Cat Cry: The Adventure.\nАвтор комикса - Kazerad.\n" << endl;
	switch (bg) {
	case 1: {
		system("color 40");
		break;
	}
	case 2: {
		system("color C0");
		break;
	}
	case 3: {
		system("color E0");
		break;
	}
	case 4: {
		system("color 20");
		break;
	}
	case 5: {
		system("color B0");
		break;
	}
	case 6: {
		system("color 10");
		break;
	}
	case 7: {
		system("color 50");
		break;
	}
	case 8: {
		system("color 00");
		break;
	}
	case 9: {
		system("color F0");
		break;
	}
	default: {
		system("color F0");
		break;
	}
	}
	// Я сидел несколько минут, обдумывая, как подставить заданный цвет заднего фона для выбора цвета шрифта. Ну, вначале я пытался подставить заместь первого числа переменную с bg. Понял, что это глупо. 
	// Потом подумал насчет команд cout и cin, и можно ли с ними что-то сделать. 
	// Потом понял, что можно подставить первый switch от заднего фона. Ну, программа вышла огромная и я уверен, ее можно было бы укоротить, но при моих знаниях - это максимум.
	// Надеюсь работать будет...
switch (text) {
case 1: {
	switch (bg) {
	case 1: {
		system("color 44");
		break;
	}
	case 2: {
		system("color C4");
		break;
	}
	case 3: {
		system("color E4");
		break;
	}
	case 4: {
		system("color 24");
		break;
	}
	case 5: {
		system("color B4");
		break;
	}
	case 6: {
		system("color 14");
		break;
	}
	case 7: {
		system("color 54");
		break;
	}
	case 8: {
		system("color 04");
		break;
	}
	case 9: {
		system("color F4");
		break;
	}
	default: {
		system("color F0");
		break;
	}
	}
	break;
}
case 2: {
	switch (bg) {
	case 1: {
		system("color 4C");
		break;
	}
	case 2: {
		system("color CC");
		break;
	}
	case 3: {
		system("color EC");
		break;
	}
	case 4: {
		system("color 2C");
		break;
	}
	case 5: {
		system("color BC");
		break;
	}
	case 6: {
		system("color 1C");
		break;
	}
	case 7: {
		system("color 5C");
		break;
	}
	case 8: {
		system("color 0C");
		break;
	}
	case 9: {
		system("color FC");
		break;
	}
	default: {
		system("color F0");
		break;
	}
	}
	break;
}
case 3: {
	switch (bg) {
	case 1: {
		system("color 4E");
		break;
	}
	case 2: {
		system("color CE");
		break;
	}
	case 3: {
		system("color EE");
		break;
	}
	case 4: {
		system("color 2E");
		break;
	}
	case 5: {
		system("color BE");
		break;
	}
	case 6: {
		system("color 1E");
		break;
	}
	case 7: {
		system("color 5E");
		break;
	}
	case 8: {
		system("color 0E");
		break;
	}
	case 9: {
		system("color FE");
		break;
	}
	default: {
		system("color F0");
		break;
	}
	}
	break;
}
case 4: {
	switch (bg) {
	case 1: {
		system("color 42");
		break;
	}
	case 2: {
		system("color C2");
		break;
	}
	case 3: {
		system("color E2");
		break;
	}
	case 4: {
		system("color 22");
		break;
	}
	case 5: {
		system("color B2");
		break;
	}
	case 6: {
		system("color 12");
		break;
	}
	case 7: {
		system("color 52");
		break;
	}
	case 8: {
		system("color 02");
		break;
	}
	case 9: {
		system("color F2");
		break;
	}
	default: {
		system("color F0");
		break;
	}
	}
	break;
}
case 5: {
	switch (bg) {
	case 1: {
		system("color 49");
		break;
	}
	case 2: {
		system("color C9");
		break;
	}
	case 3: {
		system("color E9");
		break;
	}
	case 4: {
		system("color 29");
		break;
	}
	case 5: {
		system("color B9");
		break;
	}
	case 6: {
		system("color 19");
		break;
	}
	case 7: {
		system("color 59");
		break;
	}
	case 8: {
		system("color 09");
		break;
	}
	case 9: {
		system("color F9");
		break;
	}
	default: {
		system("color F0");
		break;
	}
	}
	break;
}
case 6: {
	switch (bg) {
	case 1: {
		system("color 41");
		break;
	}
	case 2: {
		system("color C1");
		break;
	}
	case 3: {
		system("color E1");
		break;
	}
	case 4: {
		system("color 21");
		break;
	}
	case 5: {
		system("color B1");
		break;
	}
	case 6: {
		system("color 11");
		break;
	}
	case 7: {
		system("color 51");
		break;
	}
	case 8: {
		system("color 01");
		break;
	}
	case 9: {
		system("color F1");
		break;
	}
	default: {
		system("color F0");
		break;
	}
	}
	break;
}
case 7: {
	switch (bg) {
	case 1: {
		system("color 45");
		break;
	}
	case 2: {
		system("color C5");
		break;
	}
	case 3: {
		system("color E5");
		break;
	}
	case 4: {
		system("color 25");
		break;
	}
	case 5: {
		system("color B5");
		break;
	}
	case 6: {
		system("color 15");
		break;
	}
	case 7: {
		system("color 55");
		break;
	}
	case 8: {
		system("color 05");
		break;
	}
	case 9: {
		system("color F5");
		break;
	}
	default: {
		system("color F0");
		break;
	}
	}
	break;
}
case 8: {
	switch (bg) {
	case 1: {
		system("color 40");
		break;
	}
	case 2: {
		system("color C0");
		break;
	}
	case 3: {
		system("color E0");
		break;
	}
	case 4: {
		system("color 20");
		break;
	}
	case 5: {
		system("color B0");
		break;
	}
	case 6: {
		system("color 10");
		break;
	}
	case 7: {
		system("color 50");
		break;
	}
	case 8: {
		system("color 00");
		break;
	}
	case 9: {
		system("color F0");
		break;
	}
	default: {
		system("color F0");
		break;
	}
	}
	break;
}
case 9: {
	switch (bg) {
	case 1: {
		system("color 4F");
		break;
	}
	case 2: {
		system("color CF");
		break;
	}
	case 3: {
		system("color EF");
		break;
	}
	case 4: {
		system("color 2F");
		break;
	}
	case 5: {
		system("color BF");
		break;
	}
	case 6: {
		system("color 1F");
		break;
	}
	case 7: {
		system("color 5F");
		break;
	}
	case 8: {
		system("color 0F");
		break;
	}
	case 9: {
		system("color FF");
		break;
	}
	default: {
		system("color F0");
		break;
	}
	}
	break;
}
default: {
	switch (bg) {
	case 1: {
		system("color 40");
		break;
	}
	case 2: {
		system("color C0");
		break;
	}
	case 3: {
		system("color E0");
		break;
	}
	case 4: {
		system("color 20");
		break;
	}
	case 5: {
		system("color B0");
		break;
	}
	case 6: {
		system("color 10");
		break;
	}
	case 7: {
		system("color 50");
		break;
	}
	case 8: {
		system("color 00");
		break;
	}
	case 9: {
		system("color F0");
		break;
	}
	default: {
		system("color F0");
		break;
	}
	}
	break;
}
}
	cout << "	PREQUEL: BEGIN\n" << endl;
	cout << " Today is the beginning of the new you.\n" << endl;
	cout << " One month ago you made yourself a promise: you were going to turn your life around. You were going to get a real\n job, stay out of jail, and not get into any more trouble with cults. Nobody thought you could do it; they said your\n questionable reputation, lack of any useful skills, and flagrant alcoholism would always hold you down.\n" << endl;
	cout << " But you had a plan.\n" << endl;
	cout << " You were going to start over, far from home. You pawned off your belongings, withdrew the rest of your inheritance,\n and narrowly managed to buy your way onto a merchant ship bound for Cyrodiil.\n" << endl;
	cout << " And now you have arrived, alone and penniless in a foreign country. Rounding up to the nearest week, you’ve been\n sober for an entire seven days. This is your chance to be whatever you want to be. Whoever you want to be.\n" << endl;
	cout << " You think you’ll start with a new name. Something less ethnic, maybe suitably Imperial, to fit in in your new home.\n\n\n\n\n\n";
	// Не понимаю почему, но оно считало за ошибку последние cout и подчеркивало их, пока я не нажал за последнюю скобку(для int main).
	// У меня было много проблем с фигурными скобками, но я в конце концов все нашел и исправил. И это меня сбило. Я уже решил запустить без этого, и посмотреть, может, что-то измениться. 
	// А оно загрузилось, и я удивился. Хоть какая-то награда за долгое исправление ошибок.
	return 0;
}
