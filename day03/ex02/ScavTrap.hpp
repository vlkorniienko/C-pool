#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	//Constructors
	ScavTrap();
	ScavTrap(std::string str);
	~ScavTrap();
	ScavTrap(ScavTrap const &other);

	ScavTrap & operator=(ScavTrap const & rhs);


	//Functions
	void 	rangedAttack(std::string const & target);
	void 	meleeAttack(std::string const & target);

	void 	challengeNewcomer(void);
	
};

#endif