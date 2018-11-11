#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & bureaucrat);
	Bureaucrat();
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;
	void		signForm(Form const & form) const;
	Bureaucrat	&operator=(Bureaucrat const & bureaucrat);

	void		incGrade();
	void		decGrade();

	class GradeTooHighException : public std::exception
 {
 public:
  GradeTooHighException();
  GradeTooHighException(GradeTooHighException const & src);
  ~GradeTooHighException() throw();

  GradeTooHighException &operator=(GradeTooHighException const &rhs);
  virtual const char *what() const throw();
 };

 class GradeTooLowException : public std::exception
 {
 public:
  GradeTooLowException();
  GradeTooLowException(GradeTooLowException const & src);
  ~GradeTooLowException() throw();

  GradeTooLowException &operator=(GradeTooLowException const &rhs);
  virtual const char *what() const throw();
 };

private:
	const std::string	_name;
	int					_grade;

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif
