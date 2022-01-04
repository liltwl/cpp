
#include <string>
#include <iostream>

class ClapTrap
{

    protected:

        std::string name;
        int Hitp;
        int Energyp;
        int Attackp;

    public:

        // Constructors and Destructor.
        ClapTrap();

        ClapTrap(std::string const &name);

        ClapTrap(ClapTrap const &clapTrap);

        ~ClapTrap();

        // Copy assignment operator.
        ClapTrap &operator=(ClapTrap const &other);

        // class's member functions.
        void attack(std::string const &target);

        void takeDamage(uint32_t amount);

        void beRepaired(uint32_t amount);


};

