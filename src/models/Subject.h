#ifndef SUBJECT_H_
#define SUBJECT_H_

#include "Observer.h"

class Subject {

public:

	~Subject() = default;

	void subscriber(Observer *observer);

	void initialize();

	void begin();

	void finalize();

	void end();

private:

	Observer *observer;

};

#endif
