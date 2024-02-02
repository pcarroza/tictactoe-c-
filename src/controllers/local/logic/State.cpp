#include <cassert>

#include "State.h"

State::State(StatesBuilder *stateBuilder) :
		states(stateBuilder) {
}

State* State::initialize() {
	assert(false);
	return nullptr;
}

State* State::begin() {
	assert(false);
	return nullptr;
}

State* State::finalize() {
	assert(false);
	return nullptr;
}

State* State::end() {
	assert(false);
	return nullptr;
}
