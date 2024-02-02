#ifndef LOCALLOGIC_H_
#define LOCALLOGIC_H_

#include "../LocalOperationControllerBuilder.h"
#include "StatesBuilder.h"
#include "State.h"
#include "../../../models/Observer.h"
#include "../../../Logic.h"

class LocalLogic: public Observer, public Logic {

public:

	LocalLogic();

	~LocalLogic();

	void initialize();

	void begin();

	void finalize();

	void end();

	OperationController* getController() override;

private:

	LocalOperationControllerBuilder *builder;

	StatesBuilder *stateBuilder;

	State *actualState;

};

#endif
