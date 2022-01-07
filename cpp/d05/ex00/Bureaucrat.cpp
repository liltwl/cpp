#include "Bureaucrat.hpp"

Brcrat::Brcrat()
{
    std::cout << "Bureaucrat constructor called" << std::endl;
	name = "";
    grade = 150;
}

Brcrat::Brcrat(const std::string &_name, int _grade) : name(_name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (_grade < 1)
        throw "Bureaucrat::GradeTooHighException";
    else if (_grade > 150)
       throw "Bureaucrat::GradeTooLowException";
    grade = _grade;
}

Brcrat::~Brcrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;  
}

const std::string Brcrat::getNmae(void) const
{
    return (name);
}

int Brcrat::getGrade(void) const
{
    return (grade);
}

void    Brcrat::incrementGrade(void)
{
    if (grade - 1 < 1)
        throw "Bureaucrat::GradeTooHighException";
    else if (grade - 1 > 150)
       throw "Bureaucrat::GradeTooLowException";
    grade--;
}

void    Brcrat::decrementGrade(void)
{
    if (grade + 1 < 1)
        throw "Bureaucrat::GradeTooHighException";
    else if (grade + 1 > 150)
       throw "Bureaucrat::GradeTooLowException";
    grade++;
}

std::ostream& operator<< (std::ostream &out, Brcrat &_Brcrat)
{
    out << "<" << _Brcrat.getNmae() << ">, bureaucrat grade " << _Brcrat.getGrade() << ".";
    return (out);
}
