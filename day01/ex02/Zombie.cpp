#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string s1, std::string s2) : type(s2), name(s1) {
	std::cout << "Zombie was created " << this << std::endl;
	return ;
}

Zombie::~Zombie() {
	std::cout << "Zombie died " << this << std::endl << std::endl;
	return ;
}

void	Zombie::announce()
{
	std::cout << this->name << " (type - " << this->type << ")"
	<< ": What's in your head? In your head Zombie, zombie, zombie ei, ei, ei" << std::endl;
}