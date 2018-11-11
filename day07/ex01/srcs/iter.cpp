#include <iostream>

template <typename T>
void	function(T *arr, int length, void(*f)(T))
{
	int i = -1;

	while (++i < length)
		(*f)(arr[i]); 
}

template <typename T>
void	print(T i) {
	std::cout << i << " ";  
}


int		main()
{
	int	arr[8] = {2, 0, 3, 1, 5, 6, 4, 98};

	std::string arr2[3] = {"Garik", "Bulldog", "Harlamov"};

	function(arr, 8, print);
	std::cout << std::endl;
	function(arr2, 3, print);

	return (0);
}
