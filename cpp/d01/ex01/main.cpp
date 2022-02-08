#include "Zombie.hpp"

int main()
{
    Zombie *z;
    int i = 0;

    z = zombieHorde(5, "noob");
    while (i < 5)
        z[i++].announce();
    delete[] (z);
}