#ifndef OBSERVER_H_
#define OBSERVER_H_

class Observer {

public:

	virtual ~Observer() = default;

	virtual void initialize() = 0;

	virtual void begin() = 0;

	virtual void finalize() = 0;

	virtual void end() = 0;
};

#endif
