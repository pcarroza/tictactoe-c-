#include "Board.h"

Board::Board() :
		turn(new Turn()) {
}

Board::~Board() {
	delete turn;
}

void Board::put(const Coordinate *coordinate) {
}

void Board::remove(const Coordinate &coordinate) {
}

bool Board::isEmpty(const Coordinate &coordinate) {
	return false;
}

bool Board::isOccupiedByCurrentPlayer(const Coordinate &coordinate) {
	return false;
}

bool Board::isBoardComplete() {
	return false;
}

Color Board::getTake() {
	return Color::NONE;
}

bool Board::existTicTacToe() {
	return false;
}
