#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Walking.h>
#include <shovelling.h>
#include <Swordplay.h>
#include <Looting.h>
#include <Falling.h>
#include <string>

void Idle::handleInput() {}
void Idle::update() {}

void Idle::jumping(Animation* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());

	delete this;
}
void Idle::climbing(Animation* a)
{
	std::cout << "Idle -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Idle::walking(Animation* a)
{
	std::cout << "Idle -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void Idle::shovelling(Animation* a)
 {
	std::cout << "Idle -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}
void Idle::swordplay(Animation* a)
{
	std::cout << "Idle -> Swordplay" << std::endl;
	a->setCurrent(new Swordplay());
	delete this;
}
void Idle::looting(Animation* a)
{
	std::cout << "Idle -> Looting" << std::endl;
	a->setCurrent(new Looting());
	delete this;
}
void Idle::falling(Animation* a)
{
	std::cout << "Idle -> Falling" << std::endl;
	a->setCurrent(new Falling());
	delete this;
}