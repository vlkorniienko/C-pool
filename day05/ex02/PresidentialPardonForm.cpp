#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 72, 45) {
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & form) {
	*this = form;
}

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 72, 45) {
	return;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & form ) {
	(void)form;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() <= getGradeForExecute())
		std::cout << _target << " has been pardonned by Zafod Beeblebrox." << std::endl;
	else
		throw Form::GradeTooLowException();
}
