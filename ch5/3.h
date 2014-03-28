/*
	Author: RexSkz
	Chap 5 Prob 3
*/

#ifndef T5_3
#define T5_3

#include <iostream>
#include "2.h"

using namespace std;

class HourlyPay: public EmployeePay {
public:
	HourlyPay(char *name, char *number, int year, int month, int day, float salary, int departmentNumber,
			int salaryNormal, int salaryExtra, int workTime) {
		this->name = new char[20];
		this->number = new char[10];
		strcpy(this->name, name);
		strcpy(this->number, number);
		this->date.year = year;
		this->date.month = month;
		this->date.day = day;
		this->salary = salary;
		this->departmentNumber = departmentNumber;
		if (salaryNormal < 0 || salaryNormal > 50) {
			cout << "Normal salary range error!" << endl;
		}
		this->salaryNormal = salaryNormal;
		if (salaryExtra < 0 || salaryExtra > 100) {
			cout << "Extra salary range error!" << endl;
		}
		this->salaryExtra = salaryExtra;
		if (workTime < 0 || workTime > 176) {
			cout << "Work time range error!" << endl;
		}
		this->workTime = workTime;
	}
	~HourlyPay() {
		delete [] name;
		delete [] number;
	}
	void print() {
		cout << "Information about employee " << this->name << " (number " << this->number << "):" << endl;
		cout << "Department number is " << this->departmentNumber << "." << endl;
		cout << "Employed in " << this->date.year << "-" << this->date.month << "-" << this->date.day << "." << endl;
		cout << "Salary per month is " << this->salary << "." << endl;
		cout << "Salary normal is " << this->salaryNormal << "." << endl;
		cout << "Salary extra is " << this->salaryExtra << "." << endl;
		cout << "Work time is " << this->workTime << "." << endl;
	}
protected:
	int salaryNormal;
	int salaryExtra;
	int workTime;
	/* data */
};

#endif
