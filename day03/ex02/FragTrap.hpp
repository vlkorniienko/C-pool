#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
	//Constructors
	FragTrap();
	FragTrap(std::string str);
	~FragTrap();
	FragTrap(FragTrap const &other);

	FragTrap & operator=(FragTrap const & rhs);

	void 	rangedAttack(std::string const & target);
	void 	meleeAttack(std::string const & target);
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif
	