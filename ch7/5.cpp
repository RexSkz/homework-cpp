/*
	Author: RexSkz
	Chap 7 Prob 5
*/

#include <iostream>
#include <ctime>
#include "sortablearray.h"

using namespace std;

int main() {
	SortableArray<double> a(10);
	srand(time(0));
	for (int i = 0; i < 10; ++i) {
		a[i] = rand();
	}
	cout << "Original data:" << endl;
	for (int i = 0; i < 10; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
	a.sort();
	cout << "Ordered data:" << endl;
	for (int i = 0; i < 10; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
