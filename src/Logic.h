#ifndef LOGIC_H_
#define LOGIC_H_

#include "controllers/OperationController.h"

class Logic {

public:

	virtual ~Logic() = default;

	virtual OperationController* getController() = 0;

};

#endif
