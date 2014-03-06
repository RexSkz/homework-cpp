/*
	Author: RexSkz
	Chap 4 Prob 2
*/

#ifndef T4_2
#define T4_2

#include <iostream>
#include <string>
#include "1.h"

using namespace std;

class TimeOff{
public:
	TimeOff(string name, string number, int sickDays, int vacation, int unpaid) {
		this->name = name;
		this->number = number;
		if (vacation > 24) {
			cerr << "Max vacation days cannot larger than 24!" << endl;
			return;
		}
		this->maxSickDays.setHour(sickDays);
		this->maxVacation.setHour(vacation);
		this->maxUnpaid.setHour(unpaid);
		this->sickTaken = 0;
		this->vacTaken = 0;
		this->unpaidTaken = 0;
	}
	string getName() { return this->name; }
	string getNumber() { return this->number; }
	NumDays getMaxSickDays() { return this->maxSickDays; }
	NumDays getMaxVacation() { return this->maxVacation; }
	NumDays getMaxUnpaid() { return this->maxUnpaid; }
	NumDays getSickTaken() { return this->sickTaken; }
	NumDays getVacTaken() { return this->vacTaken; }
	NumDays getUnpaidTaken() { return this->unpaidTaken; }
	void setName(string name) { this->name = name; }
	void setNumber(string number) { this->number = number; }
	void setMaxSickDays(int hour) { this->maxSickDays.setHour(hour); }
	void setMaxVacation(int hour) { this->maxVacation.setHour(hour); }
	void setMaxUnpaid(int hour) { this->maxUnpaid.setHour(hour); }
	void setSickTaken(int hour) { this->sickTaken.getHour() += hour; }
	void setVacTaken(int hour) { this->vacTaken.getHour() += hour; }
	void setUnpaidTaken(int hour) { this->unpaidTaken.getHour() += hour; }
private:
	string name;
	string number;
	NumDays maxSickDays;
	NumDays maxVacation;
	NumDays maxUnpaid;
	NumDays sickTaken;
	NumDays vacTaken;
	NumDays unpaidTaken;
};

#endif
