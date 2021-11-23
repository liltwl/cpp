#include "Zombie.hpp"


Zombie::Zombie(std::string _name)
{
    name = _name;
}

Zombie::~Zombie()
{
    std::cout << name << " died" << std::endl;
}

void    Zombie::announce()
{
    std::cout << "<name> " << name << "..." << std::endl;
}

