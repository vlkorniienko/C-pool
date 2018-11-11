#include "Intern.hpp"

Intern::Intern() {
	
}

Intern::Intern(Intern const & intern) {
	*this = intern;
}

Intern::~Intern() {
	return ;
}

Intern & Intern::operator=(Intern const & ) {
	return *this;
}

Form * Intern::makeForm(std::string intern, std::string target) {
	if (intern == "PresidentialPardonForm")
	{
		std::cout << "Intern creates " << target << std::endl;
		return new PresidentialPardonForm(target);
	}
	else if (intern == "RobotomyRequestForm")
	{
		std::cout << "Intern creates " << target << std::endl;
		return new RobotomyRequestForm(target);
	}
	else if (intern == "ShrubberyCreationForm")
	{
		std::cout << "Intern creates " << target << std::endl;
		return new ShrubberyCreationForm(target);
	}
	else
	{
		std::cout << "Intern didn't create anything" << std::endl;
		return (0);
	}
}