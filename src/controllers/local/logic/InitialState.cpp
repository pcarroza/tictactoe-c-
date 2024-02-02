#include "InitialState.h"

InitialState::InitialState(StatesBuilder *statesBuilder,
		LocalOperationControllerBuilder *builder) :
		State(statesBuilder),
		builder(builder) {

}

LocalOperationController* InitialState::getController() {
	return nullptr;
}
