#ifndef OPERATIONCONTROLLER_H_
#define OPERATIONCONTROLLER_H_

#include "OperationControllerVisitor.h"

class OperationController {

public:

	virtual ~OperationController() = default;

	virtual void accept(OperationControllerVisitor *operationControllerVisitor);

};

#endif
