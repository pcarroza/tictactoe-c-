#ifndef STATE_H_
#define STATE_H_

#include "../LocalOperationController.h"

class StatesBuilder;

class State {

public:

	State(StatesBuilder *stateBuilder);

	virtual ~State() = default;

	State* initialize();

	State* begin();

	State* finalize();

	State* end();

	virtual LocalOperationController* getController() = 0;

private:

	StatesBuilder *states;

};

#endif
