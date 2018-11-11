#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) {
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & form) {
	*this = form;
}

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & form )
{
	form.getName();
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() <= getGradeForExecute())
	{
		if (rand() % 2 == 0)
			std::cout << executor.getName() << " make some drilling noises." << std::endl;
		else
			std::cout << "It's a failure." << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}
