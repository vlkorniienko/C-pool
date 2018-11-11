#include "Brain.hpp"
#include <iostream>
#include <sstream>

std::string Brain::identify() const {
	std::stringstream os;

	os << std::hex << this;
	return (os.str());
}
