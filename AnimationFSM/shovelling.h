#ifndef SHOVELLING_H
#define SHOVELLING_H

#include <State.h>

class Shovelling : public State
{
public:
	Shovelling() {};
	~Shovelling() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void falling(Animation* a);
	void looting(Animation* a);
	void climbing(Animation* a);
	void swordplay(Animation* a);
	void walking(Animation* a);

};

#endif // !IDLE_H
