#ifndef NINJATRAP_H
#define NINJATRAP_H

//#include "CLapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(std::string nam);
		NinjaTrap(void);
		NinjaTrap(NinjaTrap const & src);
		NinjaTrap & operator=(NinjaTrap const &rhs);
		~NinjaTrap(void);

		std::string name;
		void ninjaShoebox(ClapTrap const &target);
		void ninjaShoebox(FragTrap const &target);
		void ninjaShoebox(ScavTrap const &target);
		void ninjaShoebox(NinjaTrap const &target);
};

#endif