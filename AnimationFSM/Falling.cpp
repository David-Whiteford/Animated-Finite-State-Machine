#include "Falling.h"

void Falling::idle(Animation* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	/*a->setCurrent(new Idle());*/
	delete this;
}
void Falling::jumping(Animation* a)
{
	std::cout << "Test" << std::endl;
	/*a->setCurrent(new Jumping());*/
	delete this;
}
