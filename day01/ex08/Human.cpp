#include "Human.hpp"
#include <iostream>
#include <map>

Human::Human(void) {}

Human::~Human() {}

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Babah on " + target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Babah on " + target << std::endl;

}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Babah on " + target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	typedef void(Human::*myfunc)(std::string const &);
	std::map <std::string, myfunc> myMap;
	myMap.insert(std::make_pair("dva" , &Human::meleeAttack));
	myMap.insert(std::make_pair("odin" , &Human::rangedAttack));
	myMap.insert(std::make_pair("tri" , &Human::intimidatingShout));

    myfunc fct = myMap[action_name];
    (this->*fct)(target);
}