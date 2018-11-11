#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "SvacTrap robot was born" << std::endl;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamagePoints = 15;
	this->armourDamageReductionPoints = 3;
	return ;
}

ScavTrap::~ScavTrap() {
	std::cout << "SvacTrap died a few seconds ago" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string str)
{
	std::cout << "SvacTrap robot " << str << " called " << std::endl;
	this->name = str;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamagePoints = 15;
	this->armourDamageReductionPoints = 3;
}

//Copy constructor

ScavTrap::ScavTrap(ScavTrap const & other)
{
	*this = other;
	return ;
}



//Operator=

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs) {
	this->hitPoints = rhs.hitPoints;
	this->maxHitPoints = rhs.maxHitPoints;
	this->energyPoints = rhs.energyPoints;
	this->maxEnergyPoints = rhs.maxEnergyPoints;
	this->level = rhs.level;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangedAttackDamagePoints = rhs.rangedAttackDamagePoints;
	this->armourDamageReductionPoints = rhs.armourDamageReductionPoints;
	return (*this);

}

//function

void	ScavTrap::rangedAttack(std::string const & target) {

	std::cout << "SvacTrap " << this->name << " start war " << target << " at long distance, causing " << this->rangedAttackDamagePoints << " percent of damage !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target) {

	std::cout << "SvacTrapP " << this->name << " start war " << target << " at short distance, causing " << this->meleeAttackDamage << " percent of damage !" << std::endl;
}



void ScavTrap::challengeNewcomer(void)
{
	const char *names[] = {"Could you give a max score for this day?", "Can you make first challenge?", "Can you take any food from our fridge and put many instead?", "Can you compile this day with gcc compiler?"};
	std::cout << "Evaluator " << names[rand() % 4] << std::endl;
}