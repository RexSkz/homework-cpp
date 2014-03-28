/*
	Author: RexSkz
	Chap 5 Prob 7
*/

#include <iostream>
#include "7.h"

using namespace std;

int main() {
	double centerX, centerY, radius;
	cout << "Input center_x, center_y, radius: ";
	cin >> centerX >> centerY >> radius;
	Circle *circle = new Circle(centerX, centerY, radius);
	cout << "The area of circle is " << circle->getArea() << "." << endl;
	long width, length;
	cout << "Input width, height: ";
	cin >> width >> length;
	Rectangle *rectangle = new Rectangle(width, length);
	cout << "The area of rectangle is " << rectangle->getArea() << "." << endl;
	return 0;
}
