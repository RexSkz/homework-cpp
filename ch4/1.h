/*
	Author: RexSkz
	Chap 4 Prob 1
*/

#ifndef T4_1
#define T4_1

#include <iostream>

using namespace std;

class NumDays{
public:
	NumDays() {};
	NumDays(int hour) { this->hour = hour; }
	void setHour(int hour) { this->hour = hour; }
	int &getHour() { return this->hour; }
	double toDay() { return this->hour / 8.0; }
	int operator+(NumDays &b) { return this->hour + b.getHour(); }
	int operator-(NumDays &b) { return this->hour - b.getHour(); }
	NumDays &operator++() {
		++(this->hour);
		return (*this);
	}
	NumDays &operator--() {
		--(this->hour);
		return (*this);
	}
	NumDays operator++(int) {
		NumDays temp(*this);
		++(this->hour);
		return temp;
	}
	NumDays operator--(int) {
		NumDays temp(*this);
		--(this->hour);
		return temp;
	}
private:
	int hour;
};

#endif
