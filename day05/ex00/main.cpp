#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat prohor = Bureaucrat();
    std::cout << prohor << std::endl;


    try
    {
        Bureaucrat innokentiy = Bureaucrat("innokentiy", 500);
        std::cout << innokentiy << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    Bureaucrat innokentiy = Bureaucrat("innokentiy", 5);
    std::cout << innokentiy << std::endl;

    Bureaucrat lenin = Bureaucrat("Lenin", 2);
    std::cout << lenin << std::endl;
    try
    {
        prohor.decGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        innokentiy.incGrade();
        std::cout << innokentiy;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        lenin.decGrade();
        std::cout << lenin;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        innokentiy.incGrade();
        std::cout << innokentiy;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat Beria = Bureaucrat("Beria", 0);
        std::cout << Beria;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat vova = Bureaucrat("Vova", 300);
        std::cout << vova;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}