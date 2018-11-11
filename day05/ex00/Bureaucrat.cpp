#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1) {
		throw hightException;
	}
	else if (grade > 150) {
		throw lowException;
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
		throw hightException;
	}
	else if (_grade > 150) {
		throw lowException;
	}
}

void			Bureaucrat::decGrade() {
	_grade++;
	if (_grade < 1) {
		throw hightException;
	}
	else if (_grade > 150) {
		throw lowException;
	}
}





const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Too high grade!";
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {
	return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException & exc) throw() {
	*this = exc;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
	return;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const & exc) {
	(void)exc;
	return *this;
}




const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Too low grade!";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {
	return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException & exc) throw() {
	*this = exc;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
	return;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const & exc) {
	(void)exc;
	return *this;
}



std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat)
{
	 o << bureaucrat.getName();
	 return (o);
}

