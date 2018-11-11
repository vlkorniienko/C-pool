#include <iostream>

int		main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string* strPtr = &str;
	std::string& strRef = str;

	std::cout << "StrPtr = " << *strPtr << std::endl;
	std::cout << "StrRef = " << strRef << std::endl;

	return (0);
}