#include "../inc/conversion.hpp"

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert + [argument]" << std::endl;
		return (0);
	}
	Conversion first(av[1]);
	std::cout << std::fixed << std::setprecision(1);

	std::cout << "char: ";
	try
	{
		int check = static_cast<int>(first);

		if (check >= 33 && check <= 126)
			std::cout << "'" << static_cast<char>(check) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch (Conversion::ConversionErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "int: ";
	try
	{
		std::cout << static_cast<int>(first) << std::endl;
	}
	catch (Conversion::ConversionErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "float: ";
	try
	{
		std::cout << static_cast<float>(first) << "f" << std::endl;
	}
	catch (Conversion::ConversionErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "double: ";
	try
	{
		std::cout << static_cast<double>(first) << std::endl;
	}
	catch (Conversion::ConversionErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
