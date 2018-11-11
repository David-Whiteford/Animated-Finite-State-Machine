#include <Climbing.h>
#include <Jumping.h>
#include <Falling.h>
#include <Looting.h>
#include <Walking.h>
#include <shovelling.h>
#include <Swordplay.h>
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
void Climbing::looting(Animation* a)
{
	std::cout << "Cant go from Climbing -> Looting " << std::endl;
	
}
void Climbing::walking(Animation* a)
{
	std::cout << "Cant go from Climbing -> Walking " << std::endl;
	
}
void Climbing::shovelling(Animation* a)
{
	std::cout << "Cant go from Climbing -> Shovelling " << std::endl;

}
void Climbing::swordplay(Animation* a)
{
	std::cout << "Cant go from Climbing -> Swordplay " << std::endl;
	
}
