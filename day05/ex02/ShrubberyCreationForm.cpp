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
	if(executor.getGrade() > this->getGradeForSign() || !(this->getGradeForExecute())){
		throw ShrubberyCreationForm::GradeTooLowException::GradeTooLowException();
	}
	else
	{
		std::string name = this->getName() + "_shrubbery";
		std::ofstream fout(name);
		fout << "      *" << std::endl;
		fout << "    ***" << std::endl;
		fout << "   *   " << std::endl;
		fout << "  ***  " << std::endl;
		fout << " ***** " << std::endl;
		fout << "     | " << std::endl;
		fout << "       " << std::endl;
		fout << "       " << std::endl;
		fout << "     * " << std::endl;
		fout << "    ***" << std::endl;
		fout << "   *   " << std::endl;
		fout << "  ***  " << std::endl;
		fout << " ***** " << std::endl;
		fout << "     | " << std::endl;
		fout.close();
	}
}
