#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	return ;
}
ZombieEvent::~ZombieEvent() {
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->store_type = type;
	return ;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie* marik = new Zombie(name, this->store_type);
	return (marik);
}
