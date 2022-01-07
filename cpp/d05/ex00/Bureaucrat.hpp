#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <string>
#include <iostream>

class Brcrat
{
    private :
        std::string name;
        int     grade;

    public :
        Brcrat();
        Brcrat(const std::string &_name, int _grade);
        ~Brcrat();

        const std::string getNmae(void) const;
        int getGrade(void) const;

        void incrementGrade(void);
        void decrementGrade(void);
};

std::ostream& operator<< (std::ostream &out, Brcrat &_Brcrat);
#endif