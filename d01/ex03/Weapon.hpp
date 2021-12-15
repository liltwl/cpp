#include <iostream>
#include <string>

class Weapon {
    private :
        std::string  type;

    public :
        Weapon(std::string _type);
        const std::string &getType();
        void        setType(std::string _type);
};

