#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__


#include <iostream>
#include <string>

class Zombie {
    private :
        std::string  name;

    public :
        Zombie(std::string _name);
        Zombie();
        ~Zombie();
        void setname(std::string name);
        void    announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif