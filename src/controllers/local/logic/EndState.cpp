#include "EndState.h"

EndState::EndState(StatesBuilder *statesBuilder) :
		State(statesBuilder) {
}

LocalOperationController* EndState::getController() {
	return nullptr;
}
