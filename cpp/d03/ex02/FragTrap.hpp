
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string const &name);
        FragTrap(FragTrap const &FragTrap);
        ~FragTrap();
        // Copy assignment operator.
        FragTrap &operator=(FragTrap const &other);

        void highFivesGuys(void);
};
