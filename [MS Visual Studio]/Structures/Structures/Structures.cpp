
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct DT {
	int date, month, year;
	int hour, minute;
};
struct TIK {
	string filmName;
	float cost;
	int row, seat;
	DT time;
};


DT timeInput() {
		DT f;
		int q, e, r, i, w;
		cout << "Введите дату:" << endl;
		cin >> q;
		cout << "Введите месяц:" << endl;
		cin >> w;
		cout << "Введите год:" << endl;
		cin >> e;
		cout << "Введите час:" << endl;
		cin >> r;
		cout << "Введите минуты:" << endl;
		cin >> i;
		f.date = q;
		f.month = w;
		f.year = e;
		f.hour = r;
		f.minute = i;
		return f;
}
	TIK ticketInput() {
		TIK r;
		string x;
		int y, z;
		float g;
		cout << "Введите имя фильма:" << endl;
		cin >> x;
		cout << "Введите ряд:" << endl;
		cin >> y;
		cout << "Введите место:" << endl;
		cin >> z;
		cout << "Введите стоимость:" << endl;
		cin >> g;
		r.filmName = x;
		r.row = y;
		r.seat = z;
		r.cost = g;
		return r;
	}


	string check(int u) {
		string m;
		if (u < 10) {
			m = "0" + to_string(u);
		}
		return m;
	}
	string DTOut(DT t) {
		string DateOutput = check(t.date) + "." + check(t.month) + "." + to_string(t.year);
		string TimeOutput = check(t.hour) + ":" + check(t.minute);
		string DTOutput = DateOutput + TimeOutput;
		return DTOutput;
	}
	string TicketOut(TIK r, DT t) {
		DTOut(t);
		string filmTickOut = " "" + r.filmName + ""\n" + to_string(r.row) + " - " + to_string(r.seat);
		string TicketOutput = filmTickOut + DTOut(t) + "\n\n" + to_string(r.cost);
		return TicketOutput;
	}


int main() {
	setlocale(LC_ALL, "rus");
	cout << "Запишите форму биллета в програму:" << endl;
	
	DT dataTimeIn = timeInput();
	TIK ticketIn = ticketInput();


}

// сделать запись в файл(-ы)