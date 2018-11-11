#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>

class Span
{

public:

	Span();
	Span(unsigned int n);
	Span(Span const &);
	~Span();
	Span &	operator=(Span const &);

	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();

private:	
	std::vector<int>	_v;
};

#endif