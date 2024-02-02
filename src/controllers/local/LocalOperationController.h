#ifndef LOCALOPERATIONCONTROLLER_H_
#define LOCALOPERATIONCONTROLLER_H_

#include "../OperationControllerVisitor.h"
#include "../../models/Game.h"
#include "LocalController.h"

class LocalOperationController: public LocalController {

public:

	LocalOperationController(Game *game);

	virtual ~LocalOperationController() = default;

	virtual void accept(
			OperationControllerVisitor *operationControllerVisitor) = 0;

};

#endif
