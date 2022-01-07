#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Brcrat;


class Form
{
    private :
        const std::string name;
        bool        i;
        const int         gradetosign;
        const int         gradetoexec;

    public :
        Form();
        Form(std::string _name, int _gradetosign, int _gradetoexec);
        ~Form();

        const std::string getName() const;
        const bool getI() const;
        const int getgradetosign() const;
        const int getgradetoexec() const;

        void beSigned(const Brcrat &B);
};

std::ostream& operator<< (std::ostream &out, Form &_Form);

#endif