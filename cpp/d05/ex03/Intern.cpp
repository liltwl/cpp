#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern deconstructor called" << std::endl;

}
Intern &Intern::operator=(Intern const &other)
{
    if (this != &other)
    {
        std::cout << "Intern copy assignment operator" << std::endl;
    }
    return (*this);
}

Form *Intern::makeForm(std::string name, std::string Target)
{
    std::string str[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    Form *(Intern::*prt[])(std::string) = {&Intern::makeRobotomyForm, &Intern::makeShrubberyForm, &Intern::makePresidentialForm};
    int i = 0;

    while (i < 3)
    {
        if (str[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*prt[i])(Target);
        }
        i++;
    }
    std::cout << "error" << std::endl;
    return NULL;
}

Form *Intern::makeRobotomyForm(std::string Target)
{
    return (new RobotomyRequestForm(Target));
}

Form *Intern::makeShrubberyForm(std::string Target)
{
    return (new ShrubberyCreationForm(Target));
}

Form *Intern::makePresidentialForm(std::string Target)
{
    return (new PresidentialPardonForm(Target));
}