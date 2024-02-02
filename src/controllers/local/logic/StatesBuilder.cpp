#include "StatesBuilder.h"

StatesBuilder::StatesBuilder(LocalOperationControllerBuilder* builder) :
		initialState(new InitialState(this, builder)),
		inGameState(new InGameState(this, builder)),
		finalState(new FinalState(this, builder)),
		endState(new EndState(this)) {
}

StatesBuilder::~StatesBuilder() {
	delete initialState;
	delete inGameState;
	delete finalState;
	delete endState;
}

InitialState* StatesBuilder::getInitialState() {
	return initialState;
}

InGameState* StatesBuilder::getInGameState() {
	return inGameState;
}

FinalState* StatesBuilder::getFinalState() {
	return finalState;
}

EndState* StatesBuilder::getEndState() {
	return endState;
}
