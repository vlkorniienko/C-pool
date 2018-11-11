#include "FragTrap.hpp"

FragTrap::FragTrap() {
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

FragTrap::FragTrap(std::string str) {
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

FragTrap::FragTrap(FragTrap const & other) {
	*this = other;
	// this->hitPoints = other.hitPoints;
	// this->maxHitPoints = other.maxHitPoints;
	// this->energyPoints = other.energyPoints;
	// this->maxEnergyPoints = other.maxEnergyPoints;
	// this->level = other.level;
	// this->meleeAttackDamage = other.meleeAttackDamage;
	// this->rangedAttackDamagePoints = other.rangedAttackDamagePoints;
	// this->armourDamageReductionPoints = other.armourDamageReductionPoints;
	return ;
}


//Get-set

std::string	FragTrap::getName() const {
	return ((std::string)this->name);
}

int		FragTrap::getMaxHitPoints() {
	return this->maxHitPoints;
}

int		FragTrap::getHitPoints() {
	return this->hitPoints;
}

int		FragTrap::getEnergyPoints() {
	return this->energyPoints;
}

int		FragTrap::getMaxEnergyPoints() {
	return this->maxEnergyPoints;
}

int		FragTrap::getMeleeAttackDamage() {
	return this->meleeAttackDamage;
}

int		FragTrap::getrangedAttackDamagePoints() {
	return this->rangedAttackDamagePoints;
}

int		FragTrap::getarmourDamageReductionPoints() {
	return this->armourDamageReductionPoints;
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



void	FragTrap::takeDamage(unsigned int amount) {
	if ((this->hitPoints - ((int)amount - this->armourDamageReductionPoints)) < 0)
		this->hitPoints = 0;
	else
		this->hitPoints -= ((int)amount - this->armourDamageReductionPoints);

	std::cout << "FR4G-TP " << this->name <<  " took " << amount - this->armourDamageReductionPoints << " points of damage" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if ((this->hitPoints + (int)amount) > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	else
		this->hitPoints += (int)amount;

	std::cout << "FR4G-TP " << this->name <<  " repaired himself for " << amount << " hit points!" << std::endl;
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
