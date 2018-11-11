#ifndef LOOTING_H
#define LOOTING_H

#include <State.h>

class Looting : public State
{
public:
	Looting() {};
	~Looting() {};

	void idle(Animation* a);
	void jumping(Animation* a);
	void falling(Animation* a);
	void shovelling(Animation* a);
	void swordplay(Animation* a);
	void walking(Animation* a);
	void climbing(Animation* a);

};

#endif // !IDLE_H
