#include "ZombieEvent.hpp"
#include <iostream>
#include <string>
#include <ctime>


std::string		make_name(void)
{
	int index;
	srand(time(NULL));

	std::string names[] = { "Petr", "Ivan", "Gena", "Robert", "Slavik" };
	index = 0 + rand() % 5;
	return ((std::string)names[index]);
}

void			randomChump()
{
	std::string name;

	name = make_name();
	ZombieEvent new_z = ZombieEvent();
	new_z.setZombieType("African-middle");
	Zombie *makeNew = new_z.newZombie(name);
	makeNew->announce();
	delete makeNew;
}

int				main()
{
	std::cout << "We will create zombie onHeap write now" << std::endl << std::endl;
	randomChump();
	std::cout << "We will create zombie onStack write now" << std::endl << std::endl;
	Zombie z1("Vasyliy", "African-small");
	z1.announce();
	return (0);
}
