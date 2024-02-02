#ifndef OPERATIONCONTROLLERVISITOR_H_
#define OPERATIONCONTROLLERVISITOR_H_

#include "StartController.h"
#include "PlacementController.h"
#include "ContinueController.h"

class OperationControllerVisitor {

public:

	virtual ~OperationControllerVisitor() = default;

	virtual void visit(StartController *startController) = 0;

	virtual void visit(PlacementController *placementController) = 0;

	virtual void visit(ContinueController *continueController) = 0;

};

#endif
