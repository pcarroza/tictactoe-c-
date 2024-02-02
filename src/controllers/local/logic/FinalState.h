#ifndef FINALSTATE_H_
#define FINALSTATE_H_

#include "../LocalOperationControllerBuilder.h"
#include "../LocalOperationController.h"
#include "State.h"

class FinalState: public virtual State {

public:

	FinalState(StatesBuilder *statesBuilder, LocalOperationControllerBuilder* builder);

	~FinalState() = default;

	LocalOperationController* getController();

private:

	LocalOperationControllerBuilder* builder;

};

#endif
