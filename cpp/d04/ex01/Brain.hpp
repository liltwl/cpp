
#ifndef _BRAIN_HPP_
#define _BRAIN_HPP_

# include "Animal.hpp"
class Brain
{
    protected :
        std::string ideas[100];

    public :
        Brain();
        //Brain(std::string const str[]);
        Brain(Brain const &other);
        ~Brain();
            // Copy assignment operator.
        //Brain &operator=(Brain const &other);

};
#endif
