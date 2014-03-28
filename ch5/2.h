/*
	Author: RexSkz
	Chap 5 Prob 2
*/

#ifndef T5_2
#define T5_2

#include <iostream>
using namespace std;

class Employee {
public:
	Employee(){}
	Employee(char *name, char *number, int year, int month, int day) {
		this->name = new char[20];
		this->number = new char[10];
		strcpy(this->name, name);
		strcpy(this->number, number);
		this->date.year = year;
		this->date.month = month;
		this->date.day = day;
	}
	~Employee() {
		delete [] name;
		delete [] number;
	}
protected:
	char *name;
	char *number;
	struct {
		int year;
		int month;
		int day;
	} date;
};

class EmployeePay: public Employee {
public:
	EmployeePay(){}
	EmployeePay(char *name, char *number, int year, int month, int day, float salary, int departmentNumber) {
		this->name = new char[20];
		this->number = new char[10];
		strcpy(this->name, name);
		strcpy(this->number, number);
		this->date.year = year;
		this->date.month = month;
		this->date.day = day;
		this->salary = salary;
		this->departmentNumber = departmentNumber;
	}
	~EmployeePay() {
		delete [] name;
		delete [] number;
	}
	void print() {
		cout << "Information about employee " << this->name << " (number " << this->number << "):" << endl;
		cout << "Department number is " << this->departmentNumber << "." << endl;
		cout << "Employed in " << this->date.year << "-" << this->date.month << "-" << this->date.day << "." << endl;
		cout << "Salary per month is " << this->salary << "." << endl;
	}
protected:
	float salary;
	int departmentNumber;
};

#endif
