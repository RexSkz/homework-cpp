/*
	Author: RexSkz
	Chap 5 Prob 7
*/

#ifndef T5_7
#define T5_7

#define PI 3.141592653589793238462643383279
#define SQR(X) ((X)*(X))

class BasicShape {
public:
	double getArea() { return this->area; }
	virtual double calcArea() = 0;
protected:
	double area;
};

class Circle: public BasicShape {
public:
	Circle(double centerX, double centerY, double radius) {
		this->centerX = centerX;
		this->centerY = centerY;
		this->radius = radius;
		this->area = this->calcArea();
	}
	double getCenterX() { return this->centerX; }
	double getCenterY() { return this->centerY; }
	double calcArea() {
		return PI * SQR(this->radius);
	}
protected:
	double centerX;
	double centerY;
	double radius;
};

class Rectangle: public BasicShape {
public:
	Rectangle(long width, long length) {
		this->width = width;
		this->length = length;
		this->area = this->calcArea();
	}
	long getWidth() { return this->width; }
	long getLength() { return this->length; }
	double calcArea() {
		return this->width * this->length;
	}
protected:
	long width;
	long length;
};

#endif
