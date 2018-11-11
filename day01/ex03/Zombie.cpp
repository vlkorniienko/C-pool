#include "Zombie.hpp"
#include <iostream>

int	Zombie:: number = 0;

Zombie::Zombie()
 {
 	if (Zombie::number >= 5)
 		Zombie::number = 0;
 	this->type = "African-blue Zombie";
 	this->name = this->make_name(this->number);
	std::cout << "Zombie was created " << this << std::endl;
	Zombie::number++;
	return ;
}

Zombie::~Zombie() {
	std::cout << "Zombie died " << this << std::endl << std::endl;
	return ;
}

void	Zombie::announce()
{
	std::cout << this->name << " (type - " << this->type << ")"
	<< ": Privet vsem" << std::endl;
}

std::string		Zombie::make_name(int number)
{
	int index;
	srand(time(NULL));

	std::string names[] = { "Petr", "Ivan", "Gena", "Robert", "Slavik" };
	index = 0 + rand() % 5 + number;
	if (index >= 5)
		index = 0;
	return ((std::string)names[index]);
}
