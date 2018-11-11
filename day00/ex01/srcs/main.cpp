#include "../Phone_book.hpp"
#include <cctype>
#include <cstdlib>

void	find_index(Book *first, int counter)
{
	std::string index;
	int i;

	std::cout << "Write index: ";
	std::cin.ignore();
	std::getline(std::cin, index);
	i = std::atoi(index.c_str());
	if (i < 1 || i > 9)
	{
		std::cout << "ERROR - no such index" << std::endl;
		exit(0);
	}
	else if (i > counter)
	{
		std::cout << "ERROR - no such index";
		exit(0);
	}
	else
	{
		std::cout << first[i - 1].first_name << std::endl;
		std::cout << first[i - 1].last_name << std::endl;
		std::cout << first[i - 1].nickname << std::endl;
		std::cout << first[i - 1].login << std::endl;
		std::cout << first[i - 1].postal_address << std::endl;
		std::cout << first[i - 1].email_address << std::endl;
		std::cout << first[i - 1].phone_number << std::endl;
		std::cout << first[i - 1].birthday_date << std::endl;
		std::cout << first[i - 1].favorite_meal << std::endl;
		std::cout << first[i - 1].underwear_color << std::endl;
		std::cout << first[i - 1].darkest_secret << std::endl;
	}
}

void	search_function(Book *first, int counter)
{
	int i;

	i = 0;
	while (i < counter)
	{
		std::cout.width(10);
		std::cout << i + 1 << "|";
		if (first[i].first_name.size() < 10)
		{
			std::cout.width(10);
			std::cout << first[i].first_name << "|";
		}
		else
			std::cout << first[i].first_name.substr(1, 9) << "." << "|";
		if (first[i].last_name.size() < 10)
		{
			std::cout.width(10);
			std::cout << first[i].last_name  << "|";
		}
		else
			std::cout << first[i].last_name.substr(1, 9) << "." << "|";
		if (first[i].nickname.size() < 10)
		{
			std::cout.width(10);
			std::cout << first[i].nickname  << "|" << std::endl;
		}
		else
			std::cout << first[i].nickname.substr(1, 9) << "." << "|";
		i++;
	}
	find_index(first, counter);
}

void	cukl(std::string command, int i, Book *first)
{
	while (command != "EXIT")
	{
		if (command == "SEARCH")
			search_function(first, i);
		else if (command == "ADD")
		{
			if (i >= 8)
			{
				std::cout << "Can not add one more, sorry(" << std::endl;
				std::cin >> command;
				continue ;
			}
			std::cout << "Input first_name: ";
			std::cin.ignore();
			if (!std::getline(std::cin, first[i].first_name))
				return ;
			std::cout << "Input last_name: ";
			if (!std::getline(std::cin, first[i].last_name))
				return ;
			std::cout << "Input nickname: ";
			if (!std::getline(std::cin, first[i].nickname))
				return ;
			std::cout << "Input login: ";
			if (!std::getline(std::cin, first[i].login))
				return ;
			std::cout << "Input postal_address: ";
			if (!std::getline(std::cin, first[i].postal_address))
				return ;
			std::cout << "Input email_address: ";
			if (!std::getline(std::cin, first[i].email_address))
				return ;
			std::cout << "Input phone_number: ";
			if (!std::getline(std::cin, first[i].phone_number))
				return ;
			std::cout << "Input birthday_date: ";
			if (!std::getline(std::cin, first[i].birthday_date))
				return ;
			std::cout << "Input favorite_meal: ";
			if (!std::getline(std::cin, first[i].favorite_meal))
				return ;
			std::cout << "Input underwear_color: ";
			if (!std::getline(std::cin, first[i].underwear_color))
				return ;
			std::cout << "Input darkest_secret ";
			if (!std::getline(std::cin, first[i].darkest_secret))
				return ;
			i++;
		}
		std::cin >> command;
	}
}

int		main()
{
	std::string command;
	Book first[8];
	int i;

	i = 0;
	std::cin >> command;
	cukl(command, i, first);
	return (0);
}