#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>

template < typename T >
int		easyfind( T & arr, int toFind)
{
	typename T::iterator ptr;

	ptr = std::find(arr.begin(), arr.end(), toFind);
	if (ptr != arr.end())
		return *ptr;
	throw std::logic_error("No such element");
}

#endif