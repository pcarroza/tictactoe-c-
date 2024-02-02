#include "InGameState.h"

InGameState::InGameState(StatesBuilder *statesBuilder,
		LocalOperationControllerBuilder *builder) :
		State(statesBuilder), builder(builder) {
}

LocalOperationController* InGameState::getController() {
	return nullptr;
}
