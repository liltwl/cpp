#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include<time.h>

Form::Form(): name(""),target("") ,gradetosign(0), gradetoexec(0)
{
    i = 0;
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(std::string _name, std::string _target, int _gradetosign, int _gradetoexec) : name(_name), target(_target), gradetosign(_gradetosign), gradetoexec(_gradetoexec)
{
    i = 0;
    std::cout << "Form constructor called" << std::endl;
    if (gradetosign < 1)
        throw GradeTooHighException();
    else if (gradetosign > 150)
        throw GradeTooLowException();
    if (gradetoexec < 1)
        throw GradeTooHighException();
    else if (gradetoexec > 150)
        throw GradeTooLowException();
}

Form::Form(Form const &other): name(""), gradetosign(0), gradetoexec(0)
{
    *this = other;
    std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(Form const &other)
{
    if (this != &other)
    {
        this->i = other.getI();
        std::cout << "Form copy assignment operator" << std::endl;
    }
    return (*this);
}


const std::string Form::getName() const
{
    return (name);
}

const std::string Form::getTarget() const
{
    return (target);
}

bool Form::getI() const
{
    return (i);
}

int Form::getgradetosign() const
{
    return (gradetosign);
}

int Form::getgradetoexec() const
{
    return (gradetoexec);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("grade is toooooooo high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("grade is tooo low");
}

const char * Form::NotSignedException::what() const throw()
{
    return "exception caught: Form is currently not signed";
}

std::ostream& operator<< (std::ostream &out, Form &_Form)
{
    out  << _Form.getName() << " Form grade required to sign " << _Form.getgradetosign() << ", grade required to execute " << _Form.getgradetoexec() << " , " << _Form.getI() << " . ";
    return (out);
}

void Form::beSigned(const Bureaucrat &B)
{
    if (B.getGrade() <= gradetosign)
        i = 1;
    else
        throw GradeTooLowException();
}

