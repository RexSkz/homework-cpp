/*
	Author: RexSkz
	Chap 4 Prob 3
*/

#include <iostream>
#include <string>
#include "2.h"

using namespace std;

int main() {
	cout << "Input name, number, total sick days, vacatioin days and unpaid days." << endl;
	string name;
	string number;
	int sick, vac, unpaid;
	cin >> name >> number >> sick >> vac >> unpaid;
	TimeOff timeoff(name, number, sick, vac, unpaid);
	cout << timeoff.getMaxSickDays().toDay() << endl;
	return 0;
}
