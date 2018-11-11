#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string nam);
		ScavTrap(void);
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const &rhs);
		~ScavTrap(void);

		std::string name;

		void challengeNewcomer(void);
};

#endif