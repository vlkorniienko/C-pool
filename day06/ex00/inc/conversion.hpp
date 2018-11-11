#ifndef CONVERSION_H
# define CONVERSION_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <exception>

class	Conversion
{

	public:

		Conversion(void);
		Conversion(std::string input);
		Conversion(Conversion &obj);
		virtual ~Conversion(void);
		Conversion &operator=(Conversion const &r);

		class ConversionErrorException : public std::exception
		{
			public:
				
				ConversionErrorException(void);
				ConversionErrorException(ConversionErrorException const &obj);
				virtual ~ConversionErrorException(void) throw();
				ConversionErrorException &operator=(ConversionErrorException const &r);
				virtual const char* what() const throw();
		};

		operator char(void) const;
		operator int(void) const;
		operator float(void) const;
		operator double(void) const;


	private:

		std::string _input;
}; 


#endif