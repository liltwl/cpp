#include "Bureaucrat.hpp"

int main()
{
    try
    {
       Bureaucrat *A = new Bureaucrat("omar", 102);
       Bureaucrat *B = new Bureaucrat();

        *B = *A;
        A->incrementGrade();

        std::cout << (*A) << std::endl;
        std::cout << *B << std::endl;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
}