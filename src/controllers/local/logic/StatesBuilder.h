#ifndef STATESBUILDER_H_
#define STATESBUILDER_H_

#include "../LocalOperationControllerBuilder.h"
#include "InitialState.h"
#include "InGameState.h"
#include "FinalState.h"
#include "EndState.h"

class StatesBuilder {

public:

	StatesBuilder(LocalOperationControllerBuilder* builder);

	~StatesBuilder();

	InitialState* getInitialState();

	InGameState* getInGameState();

	FinalState* getFinalState();

	EndState* getEndState();

private:

	InitialState *initialState;

	InGameState *inGameState;

	FinalState *finalState;

	EndState *endState;

};

#endif
