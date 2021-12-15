#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
    private :
        std::string  name;
        Weapon      *weapon;

    public :
        HumanA(std::string _name, Weapon _weapon);
        void attack();
};