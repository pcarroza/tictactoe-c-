#ifndef CONSOLEVIEW_H_
#define CONSOLEVIEW_H_

#include "../controllers/OperationControllerVisitor.h"

class ConsoleView: public OperationControllerVisitor {

public:

	ConsoleView();

	~ConsoleView();

	void visit(StartController *startController);

	void visit(PlacementController *placementController);

	void visit(ContinueController *continueController);

};

#endif
