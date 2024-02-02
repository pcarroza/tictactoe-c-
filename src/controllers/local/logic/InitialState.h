#ifndef INITIALSTATE_H_
#define INITIALSTATE_H_

#include "../LocalOperationControllerBuilder.h"
#include "../LocalOperationController.h"
#include "State.h"

class InitialState: public virtual State {

public:

	InitialState(StatesBuilder *statesBuilder, LocalOperationControllerBuilder* builder);

	~InitialState() = default;

	LocalOperationController* getController();

private:

	LocalOperationControllerBuilder* builder;

};

#endif
