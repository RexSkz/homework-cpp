/*
	Author: RexSkz
	Chap 7 Prob 4
*/

#include <iostream>
#include "searcharray.h"

using namespace std;

int main() {
	SearchArray<int> a(10);
	for (int i = 0; i < 10; ++i) {
		a[i] = i * i;
	}
	// should output 3
	cout << a.bSearch(9) << endl;
	// should output -1
	cout << a.bSearch(27) << endl;
	return 0;
}
