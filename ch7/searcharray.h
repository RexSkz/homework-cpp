#ifndef SEARCHARRAY_H
#define SEARCHARRAY_H

#include <vector>
#include "freewillarray.h"

template <class T>
class SearchArray: public FreewillArray<T> {
public:
	SearchArray(int s): FreewillArray<T>(s) {}
	SearchArray(SearchArray &);
	SearchArray(FreewillArray<T> &obj): FreewillArray<T>(obj) {}
	int findItem(T);
	int bSearch(T);
};

template <class T>
SearchArray<T>::SearchArray(SearchArray &obj): std::vector<T>(obj.size()) {
	for (int count = 0; count < this->size(); ++count) {
		this->operator[](count) = obj[count];
	}
}
template <class T>
int SearchArray<T>::findItem(T item) {
	for (int count = 0; count < this->size(); ++count) {
		if (this->operator[](count) == item) {
			return count;
		}
	}
	return -1;
}
/**
 * Binary search
 * Remember to keep the elements ordered.
 */
template <class T>
int SearchArray<T>::bSearch(T item) {
	int l = 0, r = this->size(), mid;
	while (l != r) {
		mid = (l + r) >> 1;
		if (this->operator[](mid) < item) {
			l = mid + 1;
		}
		else {
			r = mid;
		}
	}
	if (this->operator[](l) != item) {
		return -1;
	}
	return l;
}

#endif
