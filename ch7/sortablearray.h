#ifndef SORTABLEARRAY_H
#define SORTABLEARRAY_H

#include <algorithm>
#include <vector>
#include "freewillarray.h"

template <class T>
class SortableArray: public FreewillArray<T> {
public:
	SortableArray(int s): FreewillArray<T>(s) {}
	SortableArray(SortableArray &);
	SortableArray(FreewillArray<T> &obj): FreewillArray<T>(obj) {}
	void sort() {
		std::sort(&(this->operator[](0)), &(this->operator[](this->size())));
	}
};

template <class T>
SortableArray<T>::SortableArray(SortableArray &obj): std::vector<T>(obj.size()) {
	for (int count = 0; count < this->size(); ++count) {
		this->operator[](count) = obj[count];
	}
}

#endif
