#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <string>
#include <iostream>
#include "Form.hpp"
class Form;


class Brcrat
{
    private :
        std::string name;
        int     grade;

    public :
        Brcrat();
        Brcrat(const std::string &_name, int _grade);
        Brcrat(Brcrat const &other);
        ~Brcrat();
        Brcrat &operator=(Brcrat const &other);

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

std::ostream& operator<< (std::ostream &out, Brcrat &_Brcrat);
#endif