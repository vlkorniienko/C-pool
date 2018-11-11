#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &p1) : name(str), w1(p1)
{}

HumanA::~HumanA()
{}

void	HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->w1.getType() <<std::endl;
}