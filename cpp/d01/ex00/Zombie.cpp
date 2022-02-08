#include "Zombie.hpp"


Zombie::Zombie(std::string _name)
{
    name = _name;
    std::cout << "Zombie constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " is gone" << std::endl;
}

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

