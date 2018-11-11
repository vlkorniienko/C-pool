#include "Form.hpp"

Form::Form(std::string name, int gradeForSign, int gradeForExecute) : _name(name), _gradeForSign(gradeForSign), _gradeForExecute(gradeForExecute) {
	if (gradeForSign < 1 || gradeForExecute < 1) {
		throw hightException;
	}
	else if (gradeForSign > 150 || gradeForExecute > 150) {
		throw lowException;
	}
	else {
		_signed = false;
		std::cout << "Form " << _name << " was created!" << std::endl;
	}
}

Form::Form() : _name("form_name"), _gradeForSign(12), _gradeForExecute(12) {
	_signed = false;
}

Form::Form(Form const & form) : _name(form.getName()), _gradeForSign(form.getGradeForSign()), _gradeForExecute(form.getGradeForExecute()) {
	*this = form;
}

Form::~Form() {
	return ;
}

Form & Form::operator=(Form const & form) {
	_signed = form.getSigned();
	return *this;
}

std::string		Form::getName() const {
	return _name;
}

int				Form::getGradeForSign() const {
	return _gradeForSign;
}

int				Form::getGradeForExecute() const {
	return _gradeForExecute;
}

bool			Form::getSigned() const {
	return _signed;
}

void		Form::beSigned(Bureaucrat const & bureaucrat) {
	if (_signed == true)
		std::cout << "Form " << _name << " had been already signed." << std::endl;
	else if (bureaucrat.signForm(*this)) {
		_signed = true;
	}
	else
		throw lowException;
}


Form::GradeTooHighException::GradeTooHighException() 
{
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) 
{
	*this = src;
}

Form::GradeTooHighException::~GradeTooHighException() throw() 
{
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &) 
{
	return *this;
}

const char* Form::GradeTooHighException::what() const throw() 
{
	return ("Too high grade!");
}

Form::GradeTooLowException::GradeTooLowException() 
{

}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) 
{
	*this = src;
}

Form::GradeTooLowException::~GradeTooLowException() throw() 
{
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &) 
{
	return *this;
}

const char* Form::GradeTooLowException::what() const throw() 
{
	return("Too low grade!");
}



std::ostream & operator<<(std::ostream & o, Form const & form)
{
	 o << form.getName();
	 return (o);
}

