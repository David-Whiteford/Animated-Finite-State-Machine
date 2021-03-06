#ifndef CLIMBING_H
#define CLIMBING_H

#include <State.h>

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void falling(Animation* a);
	void looting(Animation* a);
	void shovelling(Animation* a);
	void swordplay(Animation* a);
	void walking(Animation* a);
	
};

#endif // !IDLE_H