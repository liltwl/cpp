#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>
#include <iostream>

class Animal
{
    protected :
        std::string type;

    public :
        Animal();
        Animal(std::string const &_type);
        Animal(Animal const &Animal);
        virtual ~Animal();
        // Copy assignment operator.
        Animal &operator=(Animal const &other);
        const std::string &getType(void) const;
        
        virtual void makeSound(void) const;
};


#endif