#ifndef GAME_H_
#define GAME_H_

#include "Coordinate.h"
#include "Observer.h"
#include "Board.h"
#include "Color.h"

class Game {

public:

	Game(Observer *observer);

	~Game();

	void put(const Coordinate *coordinate);

	void remove(const Coordinate &coordinate);

	bool isEmpty(const Coordinate &coordinate);

	bool isOccupiedByCurrentPlayer(const Coordinate &coordinate);

	bool isBoardComplete();

	Color getTake();

	int getIndexCurrentPlayer();

	bool existTicTacToe();

	void initialize();

	void begin();

	void finalize();

	void end();

private:

	Board *board;

};

#endif
