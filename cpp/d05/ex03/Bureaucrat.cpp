#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat constructor called" << std::endl;
	name = "";
    grade = 150;
}

Bureaucrat::Bureaucrat(const std::string &_name, int _grade) : name(_name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
       throw GradeTooLowException();
    grade = _grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
    *this = other;
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;  
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
    if (this != &other)
    {
        name = other.getName();
        grade = other.getGrade();
        std::cout << "Bureaucrat copy assignment operator" << std::endl;
    }
    return (*this);
}

const std::string Bureaucrat::getName(void) const
{
    return (name);
}

int Bureaucrat::getGrade(void) const
{
    return (grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("grade is toooooooo high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("grade is tooo low");
}

void    Bureaucrat::incrementGrade(void)
{
    if (grade - 1 < 1)
        throw GradeTooHighException();
    else if (grade - 1 > 150)
      throw GradeTooLowException();
    grade--;
}

void    Bureaucrat::decrementGrade(void)
{
    if (grade + 1 < 1)
        throw GradeTooHighException();
    else if (grade + 1 > 150)
       throw GradeTooLowException();
    grade++;
}


std::ostream& operator<< (std::ostream &out, Bureaucrat &_Bureaucrat)
{
    out << _Bureaucrat.getName() << ", bureaucrat grade " << _Bureaucrat.getGrade() << ".";
    return (out);
}


void Bureaucrat::signForm(const Form &_Form)
{
    if (_Form.getI() == 0)
        std::cout << name << " cannot sign " << _Form.getName() << " because of you." << std::endl;
    else
        std::cout << name << " signs " << _Form.getName()  << std::endl;
}