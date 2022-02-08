#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    Zombie *z;
    
    i = 0;
    z = new Zombie[N];
    while (i < N)
        z[i++].setname(name);
    return (z);
}