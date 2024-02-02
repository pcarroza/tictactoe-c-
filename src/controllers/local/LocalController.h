#ifndef LOCALCONTROLLER_H_
#define LOCALCONTROLLER_H_

#include "../../models/Coordinate.h"
#include "../../models/Game.h"

class LocalController {

public:

	LocalController(Game *game);

	~LocalController() = default;

	void put(const Coordinate *coordinate);

	void remove(const Coordinate &coordinate);

	bool isEmpty(const Coordinate &coordinate);

	bool isOccupiedByCurrentPlayer(const Coordinate &coordinate);

	bool isBoardComplete();

	Color getTake();

	int getIndexCurrentPlayer();

	void initialize();

	void begin();

	void finalize();

	void end();

private:

	Game *game;

};

#endif
