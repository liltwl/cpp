#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    type = _type;
}

const std::string &Weapon::getType()
{
    const std::string &tt = type;
    return (tt);
}

void        Weapon::setType(std::string _type)
{
    type = _type;
}