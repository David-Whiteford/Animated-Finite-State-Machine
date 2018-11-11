#include <Climbing.h>
#include <Jumping.h>
#include <Falling.h>
#include <Looting.h>
#include <Idle.h>
#include <shovelling.h>
#include <Walking.h>

#include <string>

void Shovelling::idle(Animation* a)
{
	std::cout << "Shovelling -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Shovelling::jumping(Animation* a)
{
	std::cout << "Cant go from Shovelling -> Jump" << std::endl;
	
}
void Shovelling::falling(Animation* a)
{
	std::cout << "Cant go from Shovelling -> Falling" << std::endl;
	
}
void Shovelling::looting(Animation* a)
{
	std::cout << "Shovelling -> Looting" << std::endl;
	a->setCurrent(new Looting());
	delete this;
}

void Shovelling::swordplay(Animation* a)
{
	std::cout << "Cant go from Shovelling -> Swordplay" << std::endl;
	
}

void Shovelling::climbing(Animation* a)
{
	std::cout << "Cant go from Shovelling -> Climbing" << std::endl;
	
}

void Shovelling::walking(Animation* a)
{
	std::cout << "Shovelling -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}