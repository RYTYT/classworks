﻿// KnowledgeTest.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << " Добро пожаловать на тест по общим знаниям! \n Вам будет задано 10 вопросов. \n Максимальный бал - 12." << endl;
	cout << " На вопросы отвечайте числом, словом на английском языке или вариантом ответа. \n Желаю успехов!" << endl;
	// Я хотел сделать 30 вопросов, за которые всего можно было бы получить 100 балов, но понял, что программа будет слишком массивная.
	// Понял потом, что можно убрать else.
	// Никак не мог понять одну ошибку. Я забыл добавить #include <string>.
	float t = 0;
	cout << "1. Сколько цветов есть в радуге?" << endl;
	int e1;
	cin >> e1;
	if (e1 == 7) {
		t = t + 0.5;
	}
	else {
		t = t + 0;
	}
	cout << "2. Сколько агрегатных состояний существует?" << endl;
	int e2;
	cin >> e2;
	if (e2 == 3) {
		t = t + 0.5;
	}
	cout << "3. Какое общеизвестное вещество может перебывать во всех агрегатных состояниях?" << endl;
	string e3;
	cin >> e3;
	if (e3 == "Water" ǀǀ e3 == "water") {
		t = t + 0.5;
	}
	cout << "4. Какая по счету является планета Земля? " << endl;
	int e4;
	cin >> e4;
	if (e4 == 3) {
		t = t + 1;
	}
	cout << "5. В каком месяце больше дней в высокосном году? \n 1) Июнь 2) Октябрь 3) Февраль 4) Декабрь" << endl;
	int e5;
	cin >> e5;
	if (e5 == 3) {
		t = t + 1;
	}
	cout << "6. Посчитайте сколько будет: 15*(24 - 14)/3 - 9 =" << endl;
	int e6;
	cin >> e6;
	if (e6 == 41) {
		t = t + 2;
	}
	cout << "7. Сколько океанов есть на планете Земля?" << endl;
	int e7;
	cin >> e7;
	if (e7 == 4) {
		t = t + 2;
	}
	cout << "8. Сколько материков на планете?" << endl;
	int e8;
	cin >> e8;
	if (e8 == 6) {
		t = t + 2;
	}
	cout << "9. В мире обитают летающие мыши и летающие белки. Существуют ли летающие панды? (Yes/No)" << endl;
	string e9;
	cin >> e9;
	if (e9 == "No") {
		t = t + 0.5;
	}
	cout << "10. Выберите имя известного ученого, который открыл закон, который записывается: E = m*c*c. \n 1) Леонардо да Винчи 2)Майкл Фарадей 3)Исаак Ньютон 4) Альберт Ейнштейн " << endl;
	int e10;
	cin >> e10;
	if (e10 == 4) {
		t = t + 2;
	}
	cout << "Тест закончен. Поздравляю! Вы набрали " << t << " балов.";
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.