#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name(""), gradetosign(0), gradetoexec(0)
{
    i = 0;
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(std::string _name, int _gradetosign, int _gradetoexec) : name(_name),  gradetosign(_gradetosign), gradetoexec(_gradetoexec)
{
    i = 0;
    std::cout << "Form constructor called" << std::endl;
    if (gradetosign < 1)
        throw "Bureaucrat::GradeTooHighException";
    else if (gradetosign > 150)
        throw "Bureaucrat::GradeTooLowException";
    if (gradetoexec < 1)
        throw "Bureaucrat::GradeTooHighException";
    else if (gradetoexec > 150)
        throw "Bureaucrat::GradeTooLowException";
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

const std::string Form::getName() const
{
    return (name);
}

const bool Form::getI() const
{
    return (i);
}

const int Form::getgradetosign() const
{
    return (gradetosign);
}

const int Form::getgradetoexec() const
{
    return (gradetoexec);
}

std::ostream& operator<< (std::ostream &out, Form &_Form)
{
    out << "<" << _Form.getName() << ">, Form grade required to sign " << _Form.getgradetosign() << ", grade required to execute " << _Form.getgradetoexec() << " , " << _Form.getI() << " . ";
    return (out);
}

void Form::beSigned(const Brcrat &B)
{
    if (B.getGrade() <= gradetosign)
        i = 1;
    else
        throw "Form::GradeTooLowException";
}


int main()
{
    try
    {
        Brcrat b("Fwfw", 5);
        const std::string ss = "dqwdqwd";
        Form q;
        int i=5,r=9;
        Form A(ss, 60 , r);
        A.beSigned(b);
        b.signForm(A);
        std::cout << A << std::endl;
    }
    catch(const char *s)
    {
        std::cout << s << std::endl;
    }

}
