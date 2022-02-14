#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Intern
{
    public :
        Intern();
        Intern(Intern const &other);
        ~Intern();
        Intern &operator=(Intern const &other);

        Form *makeForm(std::string name, std::string Target);
        Form *makeRobotomyForm(std::string Target);
        Form *makeShrubberyForm(std::string Target);
        Form *makePresidentialForm(std::string Target);
};

#endif