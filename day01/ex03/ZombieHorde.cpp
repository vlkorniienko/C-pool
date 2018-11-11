#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->number = N;
	this->horde = new Zombie[N];
	return ;
}

ZombieHorde::~ZombieHorde(){
	delete [] this->horde;
	return ;
}

void	ZombieHorde::announce(void) 
{
	int	i;

	i = 0;
	while (i < this->number)
	{
		this->horde[i].announce();
		i++;
	}
	return;
}