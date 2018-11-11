#include "HumanB.hpp"

HumanB::HumanB(std::string str) : name(str)
{}



HumanB::~HumanB()
{}

void	HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->w1->getType() <<std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	w1 = &w;
}