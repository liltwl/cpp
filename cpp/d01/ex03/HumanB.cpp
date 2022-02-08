#include "HumanB.hpp"

HumanB::HumanB(const std::string &_name, Weapon &_weapon)
   : name(_name)
{
    weapon = &_weapon;
    std::cout << "HummanB constructor called" << std::endl;
}

HumanB::HumanB(const std::string &_name)
   : name(_name)  
{
    std::cout << "HummanB constructor called" << std::endl;
}

void    HumanB::attack()
{
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &_weapon)
{
    weapon = &_weapon;
}