/*
	Author: RexSkz
	Chap 3 Prob 4
*/

#include <iostream>

using namespace std;

class Payroll{
public:
	Payroll(int i) {
		payPerHour = 10;
		cout << "Enter work time for No." << i << ": ";
		cin >> workTime;
	}
	void showPayment() {
		payment = payPerHour * workTime;
		cout << payment << endl;
	}
private:
	int payPerHour;
	int workTime;
	int payment;
};

int main() {
	Payroll *payroll[10];
	for (int i = 0; i < 10; ++i) {
		payroll[i] = new Payroll(i + 1);
	}
	for (int i = 0; i < 10; ++i) {
		payroll[i]->showPayment();
	}
	return 0;
}
