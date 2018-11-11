#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:
	Form(std::string name, int gradeForSign, int gradeForExecute);
	Form(Form const & form);
	Form();
	virtual ~Form();

	std::string	getName() const;
	int			getGradeForSign() const;
	int			getGradeForExecute() const;
	bool		getSigned() const;
	void		beSigned(Bureaucrat const & bureaucrat);

	virtual void execute( Bureaucrat const & ) const = 0;

	Form & operator=(Form const & form);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const &);
		~GradeTooHighException() throw();
		GradeTooHighException &operator=(GradeTooHighException const &);
		virtual const char* what() const throw();
	}hightException;

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const &);
		~GradeTooLowException() throw();
		GradeTooLowException &operator=(GradeTooLowException const &);
		virtual const char* what() const throw();
	}lowException;

private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeForSign;
	const int			_gradeForExecute;
	
};

std::ostream & operator<<(std::ostream & o, Form const & form);

#endif
