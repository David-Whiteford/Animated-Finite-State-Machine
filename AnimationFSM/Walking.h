#ifndef WALKING_H
#define WALKING_H

#include <State.h>

class Walking : public State
{
public:
	Walking() {};
	~Walking() {};

	void idle(Animation* a);
	void jumping(Animation* a);
	void falling(Animation* a);
	void looting(Animation* a);
	void shovelling(Animation* a);
	void swordplay(Animation* a);
	void climbing(Animation* a);
};

#endif //

