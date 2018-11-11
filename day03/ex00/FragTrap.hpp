#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>

class FragTrap
{

public:
	//Constructors
	FragTrap();
	FragTrap(std::string str);
	~FragTrap();
	FragTrap(FragTrap const &other);

	FragTrap & operator=(FragTrap const & rhs);

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
	void	vaulthunter_dot_exe(std::string const & target);

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
	