#include <Climbing.h>
#include <Jumping.h>
#include <Falling.h>
#include <Idle.h>

#include <string>

void Climbing::idle(Animation* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::jumping(Animation* a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Climbing::falling(Animation* a)
{
	std::cout << "Climbing -> Falling" << std::endl;
	a->setCurrent(new Falling());
	delete this;
}
