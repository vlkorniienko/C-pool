#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {

public :
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & form);
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & form );


	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};

#endif
