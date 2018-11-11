#include "Fixed.class.hpp"

const int Fixed::cufra = 8;

Fixed::Fixed() {
	std::cout << "Constructor called" << std::endl;
	this->point_v = 0;
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

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}