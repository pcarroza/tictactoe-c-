#ifndef COORDINATE_H_
#define COORDINATE_H_

using namespace std;
#include <iostream>
#include <string>

class Coordinate {

public:

	Coordinate(int row, int column);

	Coordinate();

	~Coordinate() = default;

	int getRow();

	int getColumn();

	bool operator==(const Coordinate &other) const;

	bool operator==(const Coordinate *other) const;

	std::string toString();

private:

	int row;

	int column;

};

#endif
