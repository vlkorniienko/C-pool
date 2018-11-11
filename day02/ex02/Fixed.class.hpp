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
	
	int 	getRawBits( void ) const;
	void 	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed & operator=(Fixed const & rhs);

	Fixed & operator ++();
	Fixed  operator ++(int value);
	Fixed & operator --();
	Fixed  operator --(int value);

	bool operator<(Fixed const& rhs);
	bool operator<=(Fixed const& rhs);
	bool operator>(Fixed const& rhs);
	bool operator>=(Fixed const& rhs);
	bool operator==(Fixed const& rhs);
	bool operator!=(Fixed const& rhs);

	Fixed  operator+(const Fixed &rhs);
	Fixed  operator-(const Fixed &rhs);
	Fixed  operator*(const Fixed &rhs);
	Fixed  operator/(const Fixed &rhs);

	static Fixed & 			min(Fixed & lhs, Fixed & rhs);
	static Fixed & 			max(Fixed & lhs, Fixed & rhs);
	static const Fixed & 	min(Fixed const & lhs, Fixed const & rhs);
	static const Fixed & 	max(Fixed const & lhs, Fixed const & rhs);

private:
	int point_v;
	static const int cufra;
};

std::ostream & operator<<(std::ostream & o, Fixed const & f);

#endif
