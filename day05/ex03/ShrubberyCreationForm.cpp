#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137) {
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & form) {
	*this = form;
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137){
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & form )
{
	form.getName();
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::string name = _target + "_shrubbery";
	const char *fileName = name.c_str();

	if (executor.getGrade() <= getGradeForExecute())
	{
		std::ofstream ofs(fileName);
		if (ofs)
		{
			ofs << "\n    *\n   ***\n  *****\n *******\n*********\n    |\n    " << std::endl;
		}
		ofs.close();
	}
	else
		throw Form::GradeTooLowException();
}
