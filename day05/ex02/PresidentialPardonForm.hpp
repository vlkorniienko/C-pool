#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

public :
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & form);
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm & operator=( PresidentialPardonForm const & form );

	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};

#endif
