/*
	Author: RexSkz
	Chap 1 Prob 11
	Note: My g++ cannot output Chinese so I use 
	      punctuation instead.
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>

using namespace std;

string toChinese(double rmb) {
	char temp[10];
	sprintf(temp, "%.2lf", rmb);
	string t(temp);
	string s("");
	string chinese[10] = { "Ling ", "Yi ", "Er ", "San ", "Si ", "Wu ", "Liu ", "Qi ", "Ba ", "Jiu " };
	if (t[t.size() - 1] != '0') {
		s = chinese[t[t.size() - 1] - 48] + "Fen " + s;
	}
	t = t.substr(0, t.size() - 1);
	if (t[t.size() - 1] != '0') {
		s = chinese[t[t.size() - 1] - 48] + "Jiao " + s;
	}
	t = t.substr(0, t.size() - 1);
	t = t.substr(0, t.size() - 1);
	if (t.size() == 0) {
		return s;
	}
	if (t == "0") {
		return s;
	}
	else {
		s = "Yuan " + s;
	}
	if (t[t.size() - 1] != '0') {
		s = chinese[t[t.size() - 1] - 48] + s;
		if (t.size() > 1 && t[t.size() - 2] == '0') {
			s = "Ling " + s;
		}
	}
	t = t.substr(0, t.size() - 1);
	if (t.size() == 0) {
		return s;
	}
	if (t[t.size() - 1] != '0') {
		s = chinese[t[t.size() - 1] - 48] + "Shi " + s;
		if (t.size() > 1 && t[t.size() - 2] == '0') {
			s = "Ling " + s;
		}
	}
	t = t.substr(0, t.size() - 1);
	if (t.size() == 0) {
		return s;
	}
	if (t[t.size() - 1] != '0') {
		s = chinese[t[t.size() - 1] - 48] + "Bai " + s;
		if (t.size() > 1 && t[t.size() - 2] == '0') {
			s = "Ling " + s;
		}
	}
	t = t.substr(0, t.size() - 1);
	if (t.size() == 0) {
		return s;
	}
	s = chinese[t[t.size() - 1] - 48] + "Qian " + s;
	return s;
}
int main(){
	cout << "Input date(year month day): ";
	int year, month, day;
	cin >> year >> month >> day;
	cout << "Input name: ";
	char name[20];
	cin.getline(name, 21, '\n');
	cin.getline(name, 21, '\n');
	cout << "Input RMB: ";
	double rmb;
	cin >> rmb;
	if (rmb > 10000) {
		cout << "Too much RMB. Exit." << endl;
		return -1;
	}
	cout << "Ri      Qi:\t" << year << " Nian " << month << " Yue " << day << " Ri " << endl;
	cout << "Xing  Ming:\t" << name << " RMB" << rmb << endl;
	cout << "Ren Min Bi:\t" << toChinese(rmb) << endl;
	return 0;
}
