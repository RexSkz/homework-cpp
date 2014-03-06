/*
	Author: RexSkz
	Chap 3 Prob 3
*/

#include <iostream>

using namespace std;

class MyClass{
public:
	MyClass(int count) {
		point = new float[count];
		total = 0;
	}
	~MyClass() {
		delete point;
	}
	void append(float f) {
		point[total] = f;
		++total;
	}
	float average() {
		float sum = 0;
		for (int i = 0; i < total; ++i) {
			sum += point[i];
		}
		return sum / total;
	}
private:
	float *point;
	int total;
};

int main() {
	int count;
	cout << "Input count: ";
	cin >> count;
	MyClass myClass(count);
	for (int i = 0; i < count; ++i) {
		float f;
		cin >> f;
		myClass.append(f);
	}
	cout << "The average is " << myClass.average() << "." << endl;
}
