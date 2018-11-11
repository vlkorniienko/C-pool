#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

public:
	Intern();
	Intern(Intern const &);
	~Intern();

	Intern & operator=(Intern const & intern);

	Form * makeForm(std::string intern, std::string target);

};

std::ostream & operator<<(std::ostream & o, Intern const & intern);

#endif
