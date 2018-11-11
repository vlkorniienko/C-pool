#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>

class Fixed
{
public:

	Fixed();
	Fixed(Fixed const & other);
	~Fixed();

	Fixed & operator=(Fixed const & rhs);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int point_v;
	static const int cufra;
};

#endif