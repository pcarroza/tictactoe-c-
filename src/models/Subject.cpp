#include "Subject.h"

void Subject::subscriber(Observer *observer) {
	this->observer = observer;
}

void Subject::initialize() {
	observer->initialize();
}

void Subject::begin() {
	observer->begin();
}

void Subject::finalize() {
	observer->finalize();
}

void Subject::end() {
	observer->end();
}
