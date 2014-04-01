#ifndef FREEWINNARRAY_H
#define FREEWINNARRAY_H

#include <iostream>
#include <cstdlib>

template <class T>
class FreewillArray {
private:
	T *aptr;
	int arraySize;
	void memError();
	void subError();
public:
	FreewillArray() { aptr = 0; arraySize = 0; }
	FreewillArray(int);
	FreewillArray(const FreewillArray &);
	~FreewillArray();
	int size() { return arraySize; }
	T &operator[](const int &);
};

template <class T>
FreewillArray<T>::FreewillArray(int s) {
	arraySize = s;
	aptr = new T[s];
	if (aptr == 0) {
		memError();
	}
	for (int count = 0; count < arraySize; ++count) {
		*(aptr + count) = 0;
	}
}
template <class T>
FreewillArray<T>::FreewillArray(const FreewillArray &obj) {
	arraySize = obj.arraySize;
	aptr = new T[arraySize];
	if (aptr == 0) {
		memError();
	}
	for (int count = 0; count < arraySize; ++count) {
		*(aptr + count) = *(obj.aptr + count);
	}
}
template <class T>
FreewillArray<T>::~FreewillArray() {
	if (arraySize > 0) {
		delete [] aptr;
	}
}
template <class T>
void FreewillArray<T>::memError() {
	std::cout << "Error: no available space." << std::endl;
	exit(0);
}
template <class T>
void FreewillArray<T>::subError() {
	std::cout << "Error: sub error." << std::endl;
	exit(0);
}
template <class T>
T &FreewillArray<T>::operator[](const int &sub) {
	if (sub < 0 || sub > arraySize) {
		subError();
	}
	return aptr[sub];
}

#endif
