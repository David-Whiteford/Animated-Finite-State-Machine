#include "Falling.h"
#include "Walking.h"
#include "Looting.h"
#include "Jumping.h"
#include "shovelling.h"
#include "Swordplay.h"
#include "Idle.h"

void Falling::idle(Animation* a)
{
	std::cout << "Falling -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Falling::walking(Animation* a)
{
	std::cout << "Falling -> Walking " << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void Falling::looting(Animation* a)
{
	std::cout << "Cant go from Falling -> Looting " << std::endl;
}
void Falling::jumping(Animation* a)
{
	std::cout << "Cant go from Falling -> Jumping " << std::endl;
	
}
void Falling::shovelling(Animation* a)
{
	std::cout << "Cant go from Falling -> Shovelling " << std::endl;

	
}
void Falling::swordplay(Animation* a)
{
	std::cout << "Falling -> Swordplay " << std::endl;
	a->setCurrent(new Swordplay());
	delete this; 
}

void Falling::climbing(Animation* a)
{
	std::cout << "Cant go from Falling -> Climbing" << std::endl;
	
}
