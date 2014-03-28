/*
	Author: RexSkz
	Chap 5 Prob 2
*/

#include <iostream>
#include "2.h"

using namespace std;

int main() {
	char *name = new char[20];
	char *number = new char[10];
	int year, month, day;
	int salary, departmentNumber;
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
	EmployeePay *employeePay = new EmployeePay(name, number, year, month, day, salary, departmentNumber);
	employeePay->print();
	return 0;
}
