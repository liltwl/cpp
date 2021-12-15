#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
    private :
        std::string  name;
        Weapon      *weapon;

    public :
        HumanB(std::string _name, Weapon _weapon);
        HumanB(std::string _name);
        void   setWeapon(Weapon _weapon);
        void   attack();
};