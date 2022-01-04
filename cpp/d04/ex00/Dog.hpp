#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        Dog(std::string const &_type);
        Dog(Dog const &Dog);
        ~Dog();
        // Copy assignment operator.
        Dog &operator=(Dog const &other);
        const std::string &getType(void) const;

        virtual void const  makeSound(void) const;
};

#endif
