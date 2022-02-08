#include "Zombie.hpp"


Zombie::Zombie(std::string _name)
{
    std::cout << "Zombie constructor called" << std::endl;
    name = _name;
}

Zombie::Zombie()
{
    std::cout << "Zombie constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " is gone" << std::endl;
}

void    Zombie::announce()
{
    std::cout  << name  << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string _name)
{
    name = _name;
}
