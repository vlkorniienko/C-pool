#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {

public :
	RobotomyRequestForm(std::string where);
	RobotomyRequestForm(RobotomyRequestForm const & form);
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm & operator=( RobotomyRequestForm const & form );

	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;

};

#endif
