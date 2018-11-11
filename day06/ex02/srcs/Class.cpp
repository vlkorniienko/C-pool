#include "../inc/Class.hpp"

Base::~Base(void) {}

A::A(void) {}

A::A(A &obj) { *this = obj; }

A::~A(void) {}

A &A::operator=(A const &r) 
{
	(void)r;
	return (*this);
}

B::B(void) {}

B::B(B &obj) { *this = obj; }

B::~B(void) {}

B &B::operator=(B const &r) 
{
	(void)r;
	return (*this);
}

C::C(void) {}

C::C(C &obj) { *this = obj; }

C::~C(void) {}

C &C::operator=(C const &r) 
{
	(void)r;
	return (*this);
}