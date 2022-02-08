#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(const std::string _type)
{
    type = _type;
    std::cout << "Weapon constructor called" << std::endl;
}

const std::string &Weapon::getType()
{
    return (type);
}

void        Weapon::setType(const std::string _type)
{
    type = _type;
}