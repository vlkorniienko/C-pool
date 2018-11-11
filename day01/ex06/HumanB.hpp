#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	std::string name;
	Weapon *w1;

public:
	HumanB(std::string s);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &w);
};

#endif