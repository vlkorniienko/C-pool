#include "../inc/Class.hpp"

Base	*generate(void)
{
	int r = rand() % 3;

	if (r == 0)
		return (new A());
	else if (r == 1)
		return (new B());
	else
		return (new C());
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	// if (dynamic_cast<A*>(&p))
	// 	std::cout << "A" << std::endl;
	// else if (dynamic_cast<B*>(&p))
	// 	std::cout << "B" << std::endl;
	// else if (dynamic_cast<C*>(&p))
	// 	std::cout << "C" << std::endl;

	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	} catch (std::exception & e) {}
	 try { 
	 	(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	} catch (std::exception & e) {}
	 try { 
	 	(void)dynamic_cast<C&>(p);
	 	std::cout << "C" << std::endl;
	 	return ;
	} catch (std::exception & e) {}
		
}

int	main()
{
	srand(time(0));

	std::cout << "Randomly instanciates A, B or C" << std::endl;
	Base	*create = generate();

	std::cout << "Identifying class from pointer: ";
	identify_from_pointer(create);

	std::cout << "Identifying class from reference: ";
	identify_from_reference(*create);

	delete create;

	return (0);
}