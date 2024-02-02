#include "Game.h"

Game::Game(Observer *observer) :
		board(new Board()) {
	board->subscriber(observer);
}

Game::~Game() {
	delete board;
}

void Game::put(const Coordinate *coordinate) {
	board->put(coordinate);
}

void Game::remove(const Coordinate &coordinate) {
	board->remove(coordinate);
}

bool Game::isEmpty(const Coordinate &coordinate) {
	return board->isEmpty(coordinate);
}

bool Game::isOccupiedByCurrentPlayer(const Coordinate &coordinate) {
	return board->isOccupiedByCurrentPlayer(coordinate);
}

bool Game::isBoardComplete() {
	return board->isBoardComplete();
}

Color Game::getTake() {
	return board->getTake();
}

int Game::getIndexCurrentPlayer() {
	return 1;
}

bool Game::existTicTacToe() {
	return board->existTicTacToe();
}

void Game::initialize() {
	board->initialize();
}

void Game::begin() {
	board->begin();
}

void Game::finalize() {
	board->finalize();
}

void Game::end() {
	board->end();
}

