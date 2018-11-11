#include "../inc/conversion.hpp"

Conversion::Conversion(std::string input) : _input(input) {
	return;
}

Conversion::Conversion(Conversion &obj) {
	*this = obj;
	return;
}

Conversion::~Conversion() {
	return;
}

Conversion &Conversion::operator=(Conversion const &r) {
	this->_input = r._input;
	return (*this);
}

//Conversion Catch Error And Cast
//---------------------------------------------------------


Conversion::operator char() const
{
	int ret = 0;

	try
	{
		ret = std::stoi(this->_input);
	}
	catch (const std::exception &e)
	{
		throw (ConversionErrorException());
	}
	return (static_cast<char>(ret));
	
}

Conversion::operator int() const
{
	int ret = 0;
	try
	{
		ret = std::stoi(this->_input);
	}
	catch (const std::exception &e)
	{
		throw (ConversionErrorException());
	}
	return (ret);
	
}

Conversion::operator float() const
{
	float ret = 0.0;
	try
	{
		ret = std::stof(this->_input);
	}
	catch (const std::exception &e)
	{
		throw (ConversionErrorException());
	}
	return (ret);
	
}

Conversion::operator double() const
{
	float ret = 0.0;
	try
	{
		ret = std::stod(this->_input);
	}
	catch (const std::exception &e)
	{
		throw (ConversionErrorException());
	}
	return (ret);
	
}

//ConversionErrorException Nested Class
//---------------------------------------------------------


Conversion::ConversionErrorException::ConversionErrorException() {}

Conversion::ConversionErrorException::ConversionErrorException(ConversionErrorException const &obj) {
	*this = obj;
	return;
}

Conversion::ConversionErrorException::~ConversionErrorException() throw() {}

Conversion::ConversionErrorException &Conversion::ConversionErrorException::operator=(ConversionErrorException const &r) {
	(void)r;
	return (*this);
}

const char* Conversion::ConversionErrorException::what() const throw() {
	return ("impossible");
}