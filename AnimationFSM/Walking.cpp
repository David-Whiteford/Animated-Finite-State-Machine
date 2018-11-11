#include "Walking.h"
#include <Falling.h>
#include <Idle.h>
#include <shovelling.h>
#include <Looting.h>
#include <Jumping.h>
#include <Swordplay.h>
#include <Climbing.h>
void Walking::idle(Animation* a)
{
	std::cout << "Walking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Walking::falling(Animation* a)
{
	std::cout << "Walking -> Falling" << std::endl;
	a->setCurrent(new Falling());
	delete this;

}
void Walking::shovelling(Animation* a)
{
	std::cout << "Walking -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}
void Walking::swordplay(Animation* a)
{
	std::cout << "Walking -> Swordplay" << std::endl;
	a->setCurrent(new Swordplay());
	delete this;
}
void Walking::looting(Animation* a)
{
	std::cout << "Walking -> Looting" << std::endl;
	a->setCurrent(new Looting());
	delete this;
}
void Walking::jumping(Animation* a)
{
	std::cout << "Walking -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Walking::climbing(Animation* a)
{
	std::cout << "Walking -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
