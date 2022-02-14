#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;


class Form
{
    private :
        const std::string name;
        const std::string target;
        bool              i;
        const int         gradetosign;
        const int         gradetoexec;

    public :
        Form();
        Form(std::string _name,std::string _target, int _gradetosign, int _gradetoexec);
        Form(Form const &other);
        virtual ~Form();
        Form &operator=(Form const &other);

        class GradeTooHighException : public std::exception
        {   public : 
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {        
                const char* what() const throw();
        };
        
        class NotSignedException : public std::exception
        {        
                const char* what() const throw();
        };

        const std::string getName() const;
        const std::string getTarget() const;
        bool getI() const;
        int getgradetosign() const;
        int getgradetoexec() const;

        void beSigned(const Bureaucrat &B);

        virtual void    execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<< (std::ostream &out, Form &_Form);

#endif