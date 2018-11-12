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
	
	void looting(Animation* a);
	void shovelling(Animation* a);
	void swordplay(Animation* a);
	void walking(Animation* a);
	
	void climbing(Animation* a);
};

#endif //
