#include <iostream>

template <typename T>

void		swap(T & x, T & y) {
	T tmp;

	tmp = y;
	y = x;
	x = tmp;
}

template <typename T>

T		min(T & x, T & y) {
	return (x < y ? x : y);
}

template <typename T>

T		max(T &x, T & y) {
	return (x > y ? x : y);
}	

// int		main()
// {
// 	int a = 21;
// 	int b = 42;

// 	swap<int>(a, b);
// 	std::cout << " a = " << a << std::endl;
// 	std::cout << " b = " << b << std::endl;

// 	a = 21;
// 	b = 22;
// 	int c = min(a, b);

// 	std::cout << " c = " << c << std::endl;

// 	a = 121;
// 	b = 142;

// 	int g = max(a, b);
// 	std::cout << " g = " << g << std::endl;

// 	return (0);
// }

int		main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}