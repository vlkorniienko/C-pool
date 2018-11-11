#include "Zombie.hpp"

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

class ZombieHorde
{

public:

	int		number;
	Zombie	*horde;

	ZombieHorde(int N);
	~ZombieHorde();
	void	announce();

	
};

#endif
