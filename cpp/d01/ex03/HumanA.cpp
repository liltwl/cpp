#include "HumanA.hpp"

HumanA::HumanA(const std::string &_name, Weapon &_weapon)
   : name(_name),
    weapon(_weapon)
{
}

void    HumanA::attack()
{
    std::cout << name << "attacks with his" << weapon.getType() << std::endl;
}