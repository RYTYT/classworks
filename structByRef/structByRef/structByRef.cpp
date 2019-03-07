
#include "pch.h"
#include <iostream>
using namespace std;

struct Tm {
	int hour;
	int minute;
};

struct GmDt {
	string worldname;
	string player;
	int playerLV;
	Tm playtime;
	string lastlocation;
	float playmoney;
};

void InTm(Tm &time, int a, int b) {
	time.hour = a;
	time.minute = b;
}
void InGmDt(GmDt &gamedata, string a, string b, int c, Tm d, string e, float f) {
	gamedata.worldname = a;
	gamedata.player = b;
	gamedata.playerLV = c;
	gamedata.playtime = d;
	gamedata.lastlocation = e;
	gamedata.playmoney = f;
}

void OutTm(Tm time) {
	string a,b,t;
	a = to_string(time.hour);
	b = to_string(time.minute);
	if (time.hour < 10) {
		a = "0" + a;
	}
	if (time.minute < 10) {
		b = "0" + b;
	}
	t = a + ":" + b;
}
void OutGmDt(GmDt gamedata) {
	string a,b;
	a = "--------------------\n" + gamedata.worldname + "        " + gamedata.player + "  LV " + gamedata.playerLV;
	b = gamedata.playtime + gamedata.lastlocation + gamedata.playmoney + "\n--------------------";
}

int main()
{
    

}
