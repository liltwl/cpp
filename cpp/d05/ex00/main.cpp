#include "Bureaucrat.hpp"

int main()
{
    try
    {
       Brcrat *A = new Brcrat("omar", 2);

        A->incrementGrade();

        std::cout << (*A) << std::endl;
    }
    catch(const char *msg)
    {
        std::cerr << msg << '\n';
    }
}