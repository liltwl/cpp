#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form()
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", target, 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & other): Form("RobotomyRequestForm", other.getTarget(), 72, 45)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;  
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    if (this != &other)
    {
        std::cout << "RobotomyRequestForm copy assignment operator" << std::endl;
    }
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (getgradetoexec() < executor.getGrade())
        throw GradeTooLowException();
    else if (getI() == 0)
        throw NotSignedException();
     srand (time(NULL));
    std::cout << "tatatatatatatatatatatattatata" << std::endl;
    if ((std::rand() % 100) < 50)
        std::cout << getTarget() << " has been robotomized successfully" << std::endl;
    else
        std::cout << getTarget() << " it's a failure!" << std::endl;
}