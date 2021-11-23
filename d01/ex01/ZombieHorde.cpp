#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *Z;

    Z = new Zombie(name);
    return (Z);
}

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    Zombie **z;
    
    i = 0;
    z = new Zombie*[N];
    while (i < N)
        z[i++] = new Zombie(name);
    return (*z);
}