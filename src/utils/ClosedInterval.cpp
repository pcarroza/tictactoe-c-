#include "ClosedInterval.h"

template class ClosedInterval<double> ;
template class ClosedInterval<int> ;

template<class T>
ClosedInterval<T>::ClosedInterval(T min, T max) :
		min(min), max(max) {
}

template<class T>
T ClosedInterval<T>::getMin() const {
	return min;
}

template<class T>
T ClosedInterval<T>::getMax() const {
	return max;
}

template<class T>
bool ClosedInterval<T>::includes(T value) const {
	return false;
}
