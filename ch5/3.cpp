/*
	Author: RexSkz
	Chap 5 Prob 3
*/

#include <iostream>
#include "3.h"

using namespace std;

int main() {
	char *name = new char[20];
	char *number = new char[10];
	int year, month, day;
	int salary, departmentNumber;
	int salaryNormal, salaryExtra, workTime;
	cout << "Input the information please." << endl;
	cout << "Name: ";
	cin >> name;
	cout << "Number: ";
	cin >> number;
	cout << "Employed date (year month day): ";
	cin >> year >> month >> day;
	cout << "Salary per month: ";
	cin >> salary;
	cout << "Department number: ";
	cin >> departmentNumber;
	cout << "Salary normal: ";
	cin >> salaryNormal;
	cout << "Salary extra: ";
	cin >> salaryExtra;
	cout << "Work time: ";
	cin >> workTime;
	HourlyPay *hourlyPay = new HourlyPay(name, number, year, month, day, salary, departmentNumber, salaryNormal, salaryExtra, workTime);
	hourlyPay->print();
	return 0;
}
