#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
	type = t;
}

void	Weapon::setType(std::string parametr) {
	this->type = parametr;
}

std::string const& 	Weapon::getType() {
	return this->type;
}
