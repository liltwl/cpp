#include "ShrubberyCreationForm.hpp"
#include <ostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form()
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", target, 145, 137)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & other): Form("ShrubberyCreationForm", other.getTarget(), 145, 137)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;  
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    if (this != &other)
    {
        std::cout << "ShrubberyCreationForm copy assignment operator" << std::endl;
    }
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (getgradetoexec() < executor.getGrade())
        throw GradeTooLowException();
    else if (getI() == 0)
        throw NotSignedException();
    
    std::ofstream file;

    file.open(getTarget() + "_shrubbery", std::ios::trunc);
    file << "                  |" << std::endl;
    file << "                 |.|" << std::endl;
    file << "                 |.|" << std::endl;
    file << "                |\\./|" << std::endl;
    file << "                |\\./|" << std::endl;
    file << ".               |\\./|               ." << std::endl;
    file << " \\^.\\          |\\\\.//|          /.^/" << std::endl;
    file << "  \\--.|\\       |\\\\.//|       /|.--/" << std::endl;
    file << "    \\--.| \\    |\\\\.//|    / |.--/" << std::endl;
    file << "     \\---.|\\    |\\./|    /|.---/" << std::endl;
    file << "        \\--.|\\  |\\./|  /|.--/" << std::endl;
    file << "           \\ .\\  |.|  /. /" << std::endl;
    file << " _ -_^_^_^_-  \\ \\\\ // /  -_^_^_^_- _" << std::endl;
    file << "   - -/_/_/- ^_^/| |\\^_^ -\\_\\_\\- -" << std::endl;
    file << "             /_ / | \\ _\\" << std::endl;
    file << "     {noobnoob}   |" << std::endl;
    file.close();
}