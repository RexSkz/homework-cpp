/*
	Author: RexSkz
	Chap 7 Prob 3
*/

#include <iostream>
#include <vector>

using namespace std;

template <typename T> T sum(vector<T> &c) {
	T result(0);
	for (typename vector<T>::const_iterator i = c.begin(); i != c.end(); ++i) {
		result += (*i);
	}
	return result;
}

int main() {
	// a[i] = i
	vector<int> a;
	for (int i = 1; i <= 10; ++i) {
		a.push_back(i);
	}
	// b[i] = i * i
	vector<double> b;
	for (double i = 1.0; i <= 10.0; ++i) {
		b.push_back(i * i);
	}
	cout << sum(a) << " " << sum(b) << endl;
	return 0;
}
