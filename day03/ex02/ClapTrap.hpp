#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{

public:
	ClapTrap();
	ClapTrap(std::string str);
	~ClapTrap();
	ClapTrap(ClapTrap const &other);

	ClapTrap & operator=(ClapTrap const & rhs);

	//Functions

	void 	takeDamage(unsigned int amount);
	void 	beRepaired(unsigned int amount);

	//Get
	std::string	getName() const;
	int		getHitPoints();
	int		getMaxHitPoints();
	int		getEnergyPoints();
	int		getMaxEnergyPoints();
	int		getLevel();
	int		getMeleeAttackDamage();
	int		getrangedAttackDamagePoints();
	int		getarmourDamageReductionPoints();

protected:
	
	std::string name;

	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;

	int level;

	int meleeAttackDamage;
	int rangedAttackDamagePoints;
	int armourDamageReductionPoints;	
};

#endif