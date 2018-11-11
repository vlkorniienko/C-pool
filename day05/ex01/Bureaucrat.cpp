#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	else {
		_grade = grade;
		std::cout << "Bureaucrat " << _name << " was created wiht " << _grade << " grade!" << std::endl;
	}
}

Bureaucrat::Bureaucrat() : _name("default") {
	_grade = 12;
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureaucrat) {
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat() {
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & bureaucrat) {
	_grade = bureaucrat.getGrade();
	return *this;
}

std::string		Bureaucrat::getName() const {
	return _name;
}

int				Bureaucrat::getGrade() const {
	return _grade;
}

void			Bureaucrat::incGrade() {
	_grade--;
	if (_grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else if (_grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

void			Bureaucrat::decGrade() {
	_grade++;
	if (_grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else if (_grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

void			Bureaucrat::signForm(Form const & form) const {
	if (_grade <= form.getGradeForSign()) {
		std::cout << "Bureaucrat " << _name << " signs " << form.getName() << std::endl;
	}
	else {
		throw Bureaucrat::GradeTooLowException();
		// std::cout << "Bureaucrat " << _name << " hasn't enought grade for signing " << form.getName() << " form." << std::endl;
		// return false;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{*this = src;}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &rhs)
{(void)rhs; return *this;}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{ return ("Error: grade is to high");}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{*this = src;}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &rhs)
{(void)rhs; return *this;}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{ return ("Error: grade is to low");}



std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	 return (o);
}

