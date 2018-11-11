#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
public:
	std::string type;
	std::string name;

	void	announce();
	Zombie(std::string name, std::string type);
	~Zombie();
	
};

#endif