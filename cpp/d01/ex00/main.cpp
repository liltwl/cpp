#include "Zombie.hpp"

int main()
{
    Zombie *z;

    z = newZombie("omar");
    z->announce();
    delete (z);
    randomChump("Foo");
}