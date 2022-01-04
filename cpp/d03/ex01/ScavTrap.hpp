
#include "ClapTrap.hpp"

class ScavTrap  : public ClapTrap
{

    public:

        // Constructors and Destructor.
        ScavTrap();
        ScavTrap(std::string const &name);
        ScavTrap(ScavTrap const &ScavTrap);
        ~ScavTrap();

        // Copy assignment operator.
        ScavTrap &operator=(ScavTrap const &other);

        // class's member functions.
        void attack(std::string const &target);

        void guardGate();
};

