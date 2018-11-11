#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
	std::list<int>	first;

	first.push_back(1);
	first.push_back(2);
	first.push_back(3);
	first.push_back(42);
	try {
		std::cout << easyfind(first, 43) << std::endl;
	}
	catch (std::logic_error e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << easyfind(first, 2) << std::endl;
	}
	catch (std::logic_error e) {
		std::cout << e.what() << std::endl;
	}

	std::vector<int>	vec;

	vec.push_back(10);
	vec.push_back(100);
	vec.push_back(69);
	vec.push_back(18);
	try {
		std::cout << easyfind(vec, 69) << std::endl;
	}
	catch (std::logic_error e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << easyfind(vec, 48) << std::endl;
	}
	catch (std::logic_error e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}