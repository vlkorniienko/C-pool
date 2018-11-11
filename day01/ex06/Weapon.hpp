#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{

public:
	Weapon(std::string t);
	std::string const& 	getType();
	void			setType(std::string parametr);
	
private:
	std::string type;
};

#endif