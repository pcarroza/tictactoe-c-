#ifndef INGAMESTATE_H_
#define INGAMESTATE_H_

#include "../LocalOperationControllerBuilder.h"
#include "../LocalOperationController.h"
#include "State.h"

class InGameState: public virtual State {

public:

	InGameState(StatesBuilder *stateBuilder, LocalOperationControllerBuilder* builder);

	~InGameState() = default;

	LocalOperationController* getController();

private:

	LocalOperationControllerBuilder* builder;

};

#endif
