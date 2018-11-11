#ifndef CLASS_H
# define CLASS_H

# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <ctime>

class	Base {	public: virtual ~Base(void); }; 

class	A : public Base 
{ 
	public:	
		A(void); 
		A(A &obj);
		virtual ~A(void);
		A &operator=(A const &r);
}; 

class	B : public Base 
{ 
	public:	
		B(void); 
		B(B &obj);
		virtual ~B(void);
		B &operator=(B const &r);
}; 

class	C : public Base 
{ 
	public:	
		C(void); 
		C(C &obj);
		virtual ~C(void);
		C &operator=(C const &r);
}; 

Base * generate(void);
void identify_from_pointer( Base * p );
void identify_from_reference( Base & p );

#endif