#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie *Z;

    Z = new Zombie(name);
    Z->announce();
    delete (Z);
}