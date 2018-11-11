#ifndef SWORDPLAY_H
#define SWORDPLAY_H

#include <State.h>

class Swordplay : public State
{
public:
	Swordplay() {};
	~Swordplay() {};

	void idle(Animation* a);
	void jumping(Animation* a);
	void falling(Animation* a);
	void looting(Animation* a);
	void shovelling(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
};

#endif //

