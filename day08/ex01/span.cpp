# include "span.hpp"
# include <stdexcept>
# include <vector>
# include <numeric>
#include <iostream>

Span::Span() {
	_v.reserve(0);
}

Span::Span(unsigned int n) {

	_v.reserve(n);
}

Span::Span(Span const & src) {

	*this = src;
}

Span::~Span() {}

Span &	Span::operator=(Span const & span) {

	_v = span._v;
	return *this;
}

void	Span::addNumber(int n) {

	if ( _v.size() < _v.capacity() )
		_v.push_back(n);
	else
		throw std::overflow_error("Error : container is full.");
}


int	Span::shortestSpan() {

	std::vector<int> 	cpy = _v;

    std::sort(cpy.begin(), cpy.end());
	std::adjacent_difference(cpy.begin(), cpy.end(), cpy.begin() - 1);
	cpy.pop_back();
    return (cpy[std::distance(cpy.begin(), std::min_element(cpy.begin(), cpy.end()))]);
}

int	Span::longestSpan() {

	std::vector<int>::iterator	minElemI = std::min_element(_v.begin(), _v.end());
	std::vector<int>::iterator	maxElemI = std::max_element(_v.begin(), _v.end());

	return (_v[std::distance(_v.begin(), maxElemI)] - _v[std::distance(_v.begin(), minElemI)]);
}
