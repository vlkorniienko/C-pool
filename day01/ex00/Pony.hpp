#ifndef PONY_HPP
# define PONY_HPP
#include <iostream>

class Pony {

public:
	int 		number_of_eyes;
	std::string	name;

	Pony(int p1, std::string p2);
	~Pony();

};

#endif