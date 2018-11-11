#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{

public:

	void	setZombieType(std::string type);
	Zombie* newZombie(std::string name);
			ZombieEvent();
			~ZombieEvent();
private:
	
	std::string store_type;
};

#endif