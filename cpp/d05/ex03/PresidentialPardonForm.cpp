#include "PresidentialPardonForm.hpp"
#include <ostream>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(): Form()
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", target, 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & other): Form("PresidentialPardonForm", other.getTarget(), 25, 5)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;  
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
    if (this != &other)
    {
        std::cout << "PresidentialPardonForm copy assignment operator" << std::endl;
    }
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (getgradetoexec() < executor.getGrade())
        throw GradeTooLowException();
    else if (getI() == 0)
        throw NotSignedException();
    
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}