/*
	Author: RexSkz
	Chap 1 Prob 10
*/

#include <iostream>
#include <string>

using namespace std;

string check(string s) {
	if (s.size() < 6) {
		return "Too shoooooooort.";
	}
	bool upp = false;
	bool low = false;
	bool num = false;
	for (unsigned int i = 0; i < s.size(); ++i) {
		upp |= (s[i] >= 'A' && s[i] <= 'Z');
		low |= (s[i] >= 'a' && s[i] <= 'z');
		num |= (s[i] >= '0' && s[i] <= '9');
	}
	if (!upp) {
		return "No uppercase character.";
	}
	if (!low) {
		return "No lowercase character.";
	}
	if (!num) {
		return "No numeric character.";
	}
	return "Great password!";
}
int main(){
	cout << "Input the password: ";
	string s;
	cin >> s;
	cout << check(s) << endl;
	return 0;
}
