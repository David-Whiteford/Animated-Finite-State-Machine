#include <Climbing.h>
#include <Jumping.h>
#include <Falling.h>
#include <Idle.h>
#include <shovelling.h>
#include <Swordplay.h>
#include <Walking.h>
#include <Looting.h>

#include <string>
void Swordplay::idle(Animation* a)
{
	std::cout << "Swordplay -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Swordplay::jumping(Animation* a)
{
	std::cout << "Cant go from Swordplay -> Jump" << std::endl;
	
}
void Swordplay::falling(Animation* a)
{
	std::cout << "Cant go from Swordplay -> Falling" << std::endl;
	
}
void Swordplay::walking(Animation* a)
{
	std::cout << "Swordplay -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void Swordplay::shovelling(Animation* a)
{
	std::cout << "Cant go from  Swordplay -> Shovelling" << std::endl;
	
}

void Swordplay::looting(Animation* a)
{
	std::cout << "Swordplay -> Looting" << std::endl;
	a->setCurrent(new Looting());
	delete this;
}

void Swordplay::climbing(Animation* a)
{
	std::cout << "Cant go from Swordplay -> Climbing" << std::endl;
	
}