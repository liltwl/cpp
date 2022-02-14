#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"


class PresidentialPardonForm : public Form
{
    private :
        std::string target;

    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string _target);
        PresidentialPardonForm(PresidentialPardonForm const & old_object);
        ~PresidentialPardonForm();

        PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
        void    execute(Bureaucrat const & executor) const;

};

#endif