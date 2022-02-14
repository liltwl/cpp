#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"


int main()
{
    srand ( time(NULL) );
    try 
    {
        PresidentialPardonForm pp("yoo");
        const Bureaucrat B("omar", 20);
        pp.beSigned(B);
        pp.execute(B);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    // try
    // {
    //     Brcrat b("Fwfw", 5);
    //     const std::string ss = "dqwdqwd";
    //     Form q;
    //     int i=5,r=9;
    //     Form A(ss, 60 , r);
    //     A.beSigned(b);
    //     b.signForm(A);
    //     std::cout << A << std::endl;
    // }
    // catch(std::exception & e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    int rand  = std::rand() % 100;
    std::cout << rand << std::endl;
    Intern someRandomIntern;
    Form* rrf;
    const Bureaucrat B("omar", 1);
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    rrf->beSigned(B);
    rrf->execute(B);
    delete (rrf);
}