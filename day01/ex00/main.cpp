#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony first(3, "Jhon");
	std::cout << "pony name :" << first.name << std::endl;
}

void	ponyOnTheHeap()
{
	Pony* bro = new Pony(7, "Egor");
	std::cout << "pony name :" << bro->name << std::endl;
	delete bro;
}

int		main()
{
	ponyOnTheStack();
	ponyOnTheHeap();

	return (0);
}