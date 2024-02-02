#ifndef ENDSTATE_H_
#define ENDSTATE_H_

#include "../LocalOperationController.h"
#include "State.h"

class EndState: public virtual State {

public:

	EndState(StatesBuilder *statesBuilder);

	~EndState() = default;

	LocalOperationController* getController();

};

#endif
