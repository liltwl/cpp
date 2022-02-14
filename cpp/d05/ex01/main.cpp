#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Brcrat b("Fwfw", 5);
        const std::string ss = "dqwdqwd";
        Form q;
        int i=5;
        int r=9;
        Form A(ss, 60 , r);
        A.beSigned(b);
        b.signForm(A);
        std::cout << A << std::endl;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }

}