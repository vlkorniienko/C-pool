#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>

class ScavTrap
{

public:
	//Constructors
	ScavTrap();
	ScavTrap(std::string str);
	~ScavTrap();
	ScavTrap(ScavTrap const &other);

	ScavTrap & operator=(ScavTrap const & rhs);

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

	//Functions
	void 	rangedAttack(std::string const & target);
	void 	meleeAttack(std::string const & target);
	void 	takeDamage(unsigned int amount);
	void 	beRepaired(unsigned int amount);
	void 	challengeNewcomer(void);

private:
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