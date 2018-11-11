#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Surprise MF - ClapTrap constructor called" << std::endl;
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

ClapTrap::~ClapTrap() {
	std::cout << "Surprise MF - ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string str) {
	std::cout << "Surprise MF - ClapTrap constructor called w string" << std::endl;
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

ClapTrap::ClapTrap(ClapTrap const & other) {
	*this = other;
	return ;
}



//Operator=

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs) {
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



//Get-set
std::string	ClapTrap::getName() const {
	return ((std::string)this->name);
}

int		ClapTrap::getMaxHitPoints() {
	return this->maxHitPoints;
}

int		ClapTrap::getHitPoints() {
	return this->hitPoints;
}

int		ClapTrap::getEnergyPoints() {
	return this->energyPoints;
}

int		ClapTrap::getMaxEnergyPoints() {
	return this->maxEnergyPoints;
}

int		ClapTrap::getMeleeAttackDamage() {
	return this->meleeAttackDamage;
}

int		ClapTrap::getrangedAttackDamagePoints() {
	return this->rangedAttackDamagePoints;
}

int		ClapTrap::getarmourDamageReductionPoints() {
	return this->armourDamageReductionPoints;
}

//Functions

void	ClapTrap::takeDamage(unsigned int amount) {
	if ((this->hitPoints - ((int)amount - this->armourDamageReductionPoints)) < 0)
		this->hitPoints = 0;
	else
		this->hitPoints -= ((int)amount - this->armourDamageReductionPoints);

	std::cout << "FR4G-TP " << this->name <<  " took " << amount - this->armourDamageReductionPoints << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((this->hitPoints + (int)amount) > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	else
		this->hitPoints += (int)amount;

	std::cout << "FR4G-TP " << this->name <<  " repaired himself for " << amount << " hit points!" << std::endl;
}