#include "LocalController.h"

LocalController::LocalController(Game *game) :
		game(game) {
}

void LocalController::put(const Coordinate *coordinate) {
	game->put(coordinate);
}

void LocalController::remove(const Coordinate &coordinate) {
	game->remove(coordinate);
}

bool LocalController::isEmpty(const Coordinate &coordinate) {
	return game->isEmpty(coordinate);
}

bool LocalController::isOccupiedByCurrentPlayer(const Coordinate &coordinate) {
	return game->isOccupiedByCurrentPlayer(coordinate);
}

bool LocalController::isBoardComplete() {
	return game->isBoardComplete();
}

Color LocalController::getTake() {
	return game->getTake();
}

int LocalController::getIndexCurrentPlayer() {
	return game->getIndexCurrentPlayer();
}

void LocalController::initialize() {
	game->initialize();
}

void LocalController::begin() {
	game->begin();
}

void LocalController::finalize() {
	game->finalize();
}

void LocalController::end() {
	game->end();
}
