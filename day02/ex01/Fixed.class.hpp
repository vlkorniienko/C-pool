#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>


class Fixed
{
public:

	Fixed();
	Fixed(const int int_val);
	Fixed(Fixed const & other);
	Fixed(float const fl_val);
	~Fixed();

	Fixed & operator=(Fixed const & rhs);
	
	int 	getRawBits( void ) const;
	void 	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
	int point_v;
	static const int cufra;
};

std::ostream & operator<<(std::ostream & o, Fixed const & f);

#endif