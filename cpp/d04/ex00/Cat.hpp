#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(std::string const &_type);
        Cat(Cat const &Cat);
        ~Cat();
        // Copy assignment operator.
        Cat &operator=(Cat const &other);
        const std::string &getType(void) const;

        virtual void const  makeSound(void) const;
};
#endif