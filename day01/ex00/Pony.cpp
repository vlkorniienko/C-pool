#include "Pony.hpp"

Pony::Pony(int p1, std::string p2) : number_of_eyes(p1), name(p2) {

	std::cout << "Constructor called " << this << std::endl;
	return ;
}

Pony::~Pony() {

	std::cout << "Destructor called " << this << std::endl << std::endl;
	return ;
}