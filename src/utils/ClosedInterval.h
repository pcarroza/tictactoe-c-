#ifndef CLOSEDINTERVAL_H_
#define CLOSEDINTERVAL_H_

#include "Numeric.h"

#pragma once

template<class T>
class ClosedInterval {

public:

	ClosedInterval(T min, T max);

	T getMin() const;

	T getMax() const;

	bool includes(T value) const;

private:

	T min;

	T max;

};

#endif
