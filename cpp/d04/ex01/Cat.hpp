#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(std::string const &_type);
        Cat(Cat const &Cat);
        virtual ~Cat();
        // Copy assignment operator.
        Cat &operator=(Cat const &other);
        const std::string &getType(void) const;

        void  makeSound(void) const;
    
    private :
        Brain *_Brain;
};
#endif