#include "models/Coordinate.h"
#include "models/Game.h"
#include "models/Color.h"
#include "models/Coordinate.h"
#include "utils/ClosedInterval.h"

#include <iostream>
using namespace std;
#include <map>
#include <set>

int main() {

	ClosedInterval<int> *interval = new ClosedInterval<int>(1, 2);

	cout << interval->getMax() << endl;

	Coordinate target(1, 2);
	Coordinate origin(1, 1);

	cout << (target == origin) << endl;

	std::map<Color, std::set<Coordinate*>> flat;

	flat[Color::OS].insert(new Coordinate(1, 1));
	flat[Color::OS].insert(new Coordinate(1, 2));

	flat[Color::XS].insert(new Coordinate(2, 1));
	flat[Color::XS].insert(new Coordinate(3, 2));

	for (Coordinate *coordinate : flat[Color::OS]) {
		cout << coordinate->toString() << endl;
	}

	for (Coordinate *coordinate : flat[Color::OS]) {
		delete coordinate;
	}

	flat[Color::OS].clear();
	cout << "Después de liberar la memoria:" << endl;
	for (Coordinate *coordinate : flat[Color::OS]) {
		cout << coordinate->toString() << endl;
	}

	return 0;
}

