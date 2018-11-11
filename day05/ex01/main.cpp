#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat alex = Bureaucrat("Avanesyan", 42);
	Bureaucrat nikita = Bureaucrat("Beria", 1);
	std::cout << nikita;
	Form contract("Contract1", 40, 15);
	Form loan("Contract2", 10, 5);
	try
	{
		alex.signForm(contract);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		nikita.signForm(loan);
		std::cout << loan << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		alex.incGrade();
		std::cout << alex << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		alex.incGrade();
		std::cout << alex << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		alex.signForm(contract);
		std::cout << contract << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}