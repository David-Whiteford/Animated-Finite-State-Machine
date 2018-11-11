#include <Jumping.h>
#include <Climbing.h>
#include <Looting.h>
#include <Walking.h>
#include <Idle.h>
#include <shovelling.h>
#include <Swordplay.h>
#include <Falling.h>



#include <string>

void Jumping::idle(Animation* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());

	delete this;
}
void Jumping::climbing(Animation* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Jumping::looting(Animation* a)
{
	std::cout << "Cant go from jumping -> Looting" << std::endl;
	
}
void Jumping::walking(Animation* a)
{
	std::cout << "Cant go from jumping -> Walking" << std::endl;

}


void Jumping::shovelling(Animation* a)
{
	std::cout << "Cant go from Jumping -> Shovelling" << std::endl;
	
}
void Jumping::swordplay(Animation* a)
{
	std::cout << "Jumping -> Swordplay" << std::endl;
	a->setCurrent(new Swordplay());
	delete this;
}
void Jumping::falling(Animation* a)
{
	std::cout << "Jumping -> Falling" << std::endl;
	a->setCurrent(new Falling());
	delete this;
}




