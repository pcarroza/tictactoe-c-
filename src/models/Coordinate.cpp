#include "Coordinate.h"

Coordinate::Coordinate(int row, int column) :
		row(row), column(column) {
}

Coordinate::Coordinate() :
		row(0), column(0) {
}

int Coordinate::getRow() {
	return row;
}

int Coordinate::getColumn() {
	return column;
}

bool Coordinate::operator==(const Coordinate &other) const {
	return (row == other.row) && (column == other.column);
}

bool Coordinate::operator==(const Coordinate *other) const {
	return (this->row == other->row) && (this->column == other->column);
}

std::string Coordinate::toString() {
	return "Coordinate(" + std::to_string(row) + ", " + std::to_string(column)
			+ ")";
}

