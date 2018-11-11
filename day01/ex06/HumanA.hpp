#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	
	std::string name;
	Weapon &w1;

	HumanA(std::string s, Weapon &p1);
	~HumanA();
	void	attack();
};

#endif