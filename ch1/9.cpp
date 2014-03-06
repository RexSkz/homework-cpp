/*
	Author: RexSkz
	Chap 1 Prob 9
*/

#include <iostream>
#include <algorithm>

using namespace std;

double middle(double *a, int n) {
	if (n % 2 == 1) {
		return a[n / 2];
	}
	else {
		return (a[n / 2] + a[n / 2 + 1]) / 2;
	}
}
int main(){
	int n;
	cout << "Input the total nunmber: ";
	cin >> n;
	double *a = new double[n];
	cout << "Input the " << n << " number(s), separated by space:" << endl;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);
	cout << "The middle is " << middle(a, n) << "." << endl;
	return 0;
}
