#include "Fixed.class.hpp"
#include <cmath>

const int Fixed::cufra = 8;

Fixed::Fixed() {
	std::cout << "Constructor called" << std::endl;
	this->point_v = 0;
	return ;
}

Fixed::Fixed(const int int_val) {
	std::cout << "Integer constructor called" << std::endl;
	point_v = int_val << cufra;
	return ;
}

Fixed::Fixed(float const fl_val) {
	std::cout << "Float constructor called" << std::endl;
	point_v = roundf(fl_val * (1 << cufra)); //*roundf
	return ;
}

Fixed::Fixed(Fixed const & other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->point_v = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->point_v);
}

void	Fixed::setRawBits( int const raw ) {
	this->point_v = raw;
	return ;
}

std::ostream & operator<<(std::ostream & o, Fixed const & f)
{
	o << f.toFloat();
	return (o);
}

int Fixed::toInt( void ) const
{
	return ((int)point_v >> cufra);
}

float	Fixed::toFloat( void ) const
{
	return ((float)point_v/(1 << cufra));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}