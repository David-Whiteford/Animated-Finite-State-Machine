#include <Looting.h>
#include <Climbing.h>
#include <Jumping.h>
#include <Falling.h>
#include "Walking.h"
#include <Idle.h>
#include <shovelling.h>
#include <Swordplay.h>

#include <string>

void Looting::idle(Animation* a)
{
	std::cout << "Looting -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Looting::jumping(Animation* a)
{
	std::cout << "Cant go from Looting -> Jump" << std::endl;

}
void Looting::falling(Animation* a)
{
	std::cout << "Cant go from Looting -> Falling" << std::endl;
	
}
void Looting::walking(Animation* a)
{
	std::cout << "Looting -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Looting::shovelling(Animation* a)
{
	std::cout << "Looting -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}
void Looting::swordplay(Animation* a)
{
	std::cout << "Looting -> Swordplay" << std::endl;
	a->setCurrent(new Swordplay());
	delete this;
}
void Looting::climbing(Animation* a)
{
	std::cout << "Cant go from Looting -> Climbing" << std::endl;

}