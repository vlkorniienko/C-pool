#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	
public:
	std::string type;
	std::string name;
	static int 	number;

	std::string make_name(int n);
	void		announce();
				Zombie();
				~Zombie();
	
};

#endif