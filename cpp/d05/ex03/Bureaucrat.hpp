#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <string>
#include <iostream>
#include "Form.hpp"
class Form;


class Bureaucrat
{
    private :
        std::string name;
        int     grade;

    public :
        Bureaucrat();
        Bureaucrat(const std::string &_name, int _grade);
        Bureaucrat(Bureaucrat const &other);
        ~Bureaucrat();
        Bureaucrat &operator=(Bureaucrat const &other);

        const std::string getName(void) const ;
        int getGrade(void) const;
        class GradeTooHighException : public std::exception
        {   public : 
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {        
                const char* what() const throw();
        };
        void incrementGrade(void);
        void decrementGrade(void);

        void signForm(const Form &_Form);
};

std::ostream& operator<< (std::ostream &out, Bureaucrat &_Bureaucrat);
#endif