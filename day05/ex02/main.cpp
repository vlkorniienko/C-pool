#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	srand(time(0));

	Bureaucrat b1 = Bureaucrat("Babbit", 12);
	Bureaucrat b2 = Bureaucrat("Dasti", 150);

	PresidentialPardonForm f2 = PresidentialPardonForm("test1");
	std::cout << b1 << " with grade "<< b1.getGrade() <<" try to execute " << f2 << " with grade " << f2.getGradeForSign() << std::endl;
	b1.executeForm(f2);

	try {
		std::cout << b2 << " with grade "<< b2.getGrade() <<" try to execute " << f2 << " with grade " << f2.getGradeForSign() << std::endl;
		b1.executeForm(f2);
	}
	catch (std::exception &exc) {
		std::cout << "Ooooops........ " << std::endl;
		std::cout << exc.what() << std::endl;
	}

	RobotomyRequestForm f3 = RobotomyRequestForm("test2");
	std::cout << b1 << " with grade "<< b1.getGrade() <<" try to execute " << f3 << " with grade " << f3.getGradeForSign() << std::endl;
	b1.executeForm(f2);
	try {
		std::cout << b2 << " with grade "<< b2.getGrade() <<" try to execute " << f3 << " with grade " << f3.getGradeForSign() << std::endl;
		b2.executeForm(f2);
	}
	catch (std::exception &exc) {
		std::cout << "Ooooops........ " << std::endl;
		std::cout << exc.what() << std::endl;
	}

	ShrubberyCreationForm f4 = ShrubberyCreationForm("test3");
	std::cout << b1 << " with grade "<< b1.getGrade() <<" try to execute " << f4 << " with grade " << f4.getGradeForSign() << std::endl;
	b1.executeForm(f4);
	try {
		std::cout << b2 << " with grade "<< b2.getGrade() <<" try to execute " << f4 << " with grade " << f4.getGradeForSign() << std::endl;
		b2.executeForm(f4);
	}
	catch (std::exception &exc) {
		std::cout << "Ooooops........ " << std::endl;
		std::cout << exc.what() << std::endl;
	}

	return 0;
}