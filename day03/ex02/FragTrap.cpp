#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamagePoints = 20;
	this->armourDamageReductionPoints = 5;
	return ;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string str)
{
	std::cout << "FragTrap constructor called w string" << std::endl;
	this->name = str;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamagePoints = 20;
	this->armourDamageReductionPoints = 5;
}

//Copy constructor

FragTrap::FragTrap(FragTrap const & other)
{
	*this = other;
	return ;
}



//Operator=

FragTrap & FragTrap::operator=(FragTrap const &rhs) {
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

void	FragTrap::rangedAttack(std::string const & target) {

	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamagePoints << " points of damage !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) {

	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, causing " << this->meleeAttackDamage << " points of damage !" << std::endl;
}



void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	const char *names[] = {"attack with tank", "attack with power of Earth(probably)",
	"attack with karate", "attack with magic", "attack with love"};

	if ((this->energyPoints - 25) >= 0)
	{
		std::cout << "FR4G-TP " << this->name << " " << names[rand() % 5] << " on " << target << std::endl;
		this->energyPoints -= 25;
	}
	else
		std::cout << "FR4G-TP " << this->name << " is out of energy" << std::endl;
}
