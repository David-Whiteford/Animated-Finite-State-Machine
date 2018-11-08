#ifndef FALLING_H
#define FALLING_H

#include <State.h>

class Falling : public State
{
public:
	Falling() {};
	~Falling() {};
	
	void idle(Animation* a);
	void jumping(Animation* a);
};

#endif //
