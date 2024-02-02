#include "LocalLogic.h"

LocalLogic::LocalLogic() :
		builder(new LocalOperationControllerBuilder()),
		stateBuilder(new StatesBuilder(builder)),
		actualState(stateBuilder->getInitialState()) {
}

LocalLogic::~LocalLogic() {
	delete builder;
	delete stateBuilder;
}

void LocalLogic::initialize() {
	actualState = stateBuilder->getInitialState();
}

void LocalLogic::begin() {
	actualState = stateBuilder->getInGameState();
}

void LocalLogic::finalize() {
	actualState = stateBuilder->getFinalState();
}

void LocalLogic::end() {
	actualState = stateBuilder->getEndState();
}

OperationController* LocalLogic::getController() {
	return nullptr;
}
