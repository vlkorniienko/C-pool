#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int 	main(void){

srand(time(0));
try
{
	Intern intern;
	Form* form;
	form = intern.makeForm("RobotomyRequestForm", "Robot");
	form = intern.makeForm("ShrubberyCreationForm", "Shrubbery");
	form = intern.makeForm("PresidentialPardonForm", "President");
	form = intern.makeForm("Default", "Form");
}
catch (std::exception & e){

}


return 0;
}