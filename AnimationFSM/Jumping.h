#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	void idle(Animation* a);
	
	void falling(Animation* a);
	void looting(Animation* a);
	void shovelling(Animation* a);
	void swordplay(Animation* a);
	void walking(Animation* a);
	void climbing(Animation* a);
};

#endif // !IDLE_H