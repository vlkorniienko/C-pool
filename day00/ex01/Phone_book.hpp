#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
# include <iostream>
# include <string>

class Book {

public:

	Book();
	~Book();

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
};

#endif