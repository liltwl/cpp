#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public :
        Dog();
        Dog(std::string const &_type);
        Dog(Dog const &Dog);
        virtual ~Dog();
        // Copy assignment operator.
        Dog &operator=(Dog const &other);
        const std::string &getType(void) const;

        virtual void  makeSound(void) const;


    private :
        Brain *_Brain;
};

#endif
