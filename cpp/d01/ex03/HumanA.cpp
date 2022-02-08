#include "HumanA.hpp"

HumanA::HumanA(const std::string &_name, Weapon &_weapon)
   : name(_name),
    weapon(_weapon)
{
    std::cout << "HummanA constructor called" << std::endl;
}

void    HumanA::attack()
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}