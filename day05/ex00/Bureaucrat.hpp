#include <iostream>
#include <exception>
#include <string>

class Bureaucrat
{
public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & bureaucrat);
	Bureaucrat();
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;
	void		incGrade();
	void		decGrade();
	Bureaucrat	&operator=(Bureaucrat const & bureaucrat);

	class GradeTooHighException : public std::exception
	{

	public:

		GradeTooHighException(GradeTooHighException & exc) throw();
		GradeTooHighException() throw();
		virtual ~GradeTooHighException() throw();

		GradeTooHighException	&operator=(GradeTooHighException const & exc);

		virtual const char* what() const throw();

	} hightException;

	class GradeTooLowException : public std::exception
	{

	public:

		GradeTooLowException(GradeTooLowException & exc) throw();
		GradeTooLowException() throw();
		virtual ~GradeTooLowException() throw();

		GradeTooLowException	&operator=(GradeTooLowException const & exc);

		virtual const char* what() const throw();
	
	} lowException;

private:
	const std::string	_name;
	int					_grade;

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat);
