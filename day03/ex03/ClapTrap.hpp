#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap 
{
	public:
		ClapTrap(std::string nam);
		ClapTrap(void);
		ClapTrap(ClapTrap const & src);
		ClapTrap & operator=(ClapTrap const &rhs);
		~ClapTrap(void);

		int hitPoints;
		int maxHitPoints;
		int energyPoints;
		int maxEnergyPoints;
		int level;
		std::string name;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageReduction;

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif