#include "Zombie.hpp"

int main()
{
    Zombie *z[5];

    *z = zombieHorde(5, "noob");
    z[1]->announce();
    z[3]->announce();
    delete (z[0]);
}