#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
    private :
        std::string target;

    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string _target);
        ~ShrubberyCreationForm();

        void action(std::string name);



};

#endif