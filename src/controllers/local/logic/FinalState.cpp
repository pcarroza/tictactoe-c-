#include "FinalState.h"

FinalState::FinalState(StatesBuilder *statesBuilder,
		LocalOperationControllerBuilder *builder) :
		State(statesBuilder),
		builder(builder) {

}

LocalOperationController* FinalState::getController() {
	return nullptr;
}
