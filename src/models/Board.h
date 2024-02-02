#ifndef BOARD_H_
#define BOARD_H_

#include <map>
#include <set>
using namespace std;

#include "Coordinate.h"
#include "Subject.h"
#include "Color.h"
#include "Turn.h"

class Board: public Subject {

public:

	Board();

	~Board();

	void put(const Coordinate *coordinate);

	void remove(const Coordinate &coordinate);

	bool isEmpty(const Coordinate &coordinate);

	bool isOccupiedByCurrentPlayer(const Coordinate &coordinate);

	bool isBoardComplete();

	bool existTicTacToe();

	Color getTake();

private:

	Turn *turn;

	std::map<Color, std::set<Coordinate*>> flat;

	const int NUMBER_OF_PLAYERS = 2;

};

#endif
