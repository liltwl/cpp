#include "Bureaucrat.hpp"
#include "Form.hpp"

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
        throw GradeTooHighException();
    else if (_grade > 150)
       throw GradeTooLowException();
    grade = _grade;
}

Brcrat::Brcrat(Brcrat const &other)
{
    *this = other;
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Brcrat::~Brcrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;  
}

Brcrat &Brcrat::operator=(Brcrat const &other)
{
    if (this != &other)
    {
        name = other.getName();
        grade = other.getGrade();
        std::cout << "Bureaucrat copy assignment operator" << std::endl;
    }
    return (*this);
}

const std::string Brcrat::getName(void) const
{
    return (name);
}

int Brcrat::getGrade(void) const
{
    return (grade);
}

const char* Brcrat::GradeTooHighException::what() const throw()
{
    return ("grade is toooooooo high");
}

const char* Brcrat::GradeTooLowException::what() const throw()
{
    return ("grade is tooo low");
}

void    Brcrat::incrementGrade(void)
{
    if (grade - 1 < 1)
        throw GradeTooHighException();
    else if (grade - 1 > 150)
      throw GradeTooLowException();
    grade--;
}

void    Brcrat::decrementGrade(void)
{
    if (grade + 1 < 1)
        throw GradeTooHighException();
    else if (grade + 1 > 150)
       throw GradeTooLowException();
    grade++;
}


std::ostream& operator<< (std::ostream &out, Brcrat &_Brcrat)
{
    out << _Brcrat.getName() << ", bureaucrat grade " << _Brcrat.getGrade() << ".";
    return (out);
}


void Brcrat::signForm(const Form &_Form)
{
    if (_Form.getI() == 0)
        std::cout << name << " cannot sign " << _Form.getName() << " because of you." << std::endl;
    else
        std::cout << name << " signs " << _Form.getName()  << std::endl;
}