#include "Human.hpp"

std::string	Human::identify() {
	return erik.identify();
}

Brain const &Human::getBrain() {
	return erik;
}