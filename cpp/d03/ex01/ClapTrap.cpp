
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap constructor called" << std::endl;
	name = "";
	Hitp = 10;
	Energyp = 10;
	Attackp = 0;
}

ClapTrap::ClapTrap(const std::string &pName){
	std::cout << "ClapTrap constructor called" << std::endl;
	name = pName;
	Hitp = 10;
	Energyp = 10;
	Attackp = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & other) {
	if (this != &other) {
		std::cout << "ClapTrap copy assignment operator" << std::endl;
		this->name = other.name;
		this->Hitp = other.Hitp;
		this->Energyp = other.Energyp;
		this->Attackp = other.Attackp;
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "ClapTrap copy constructor." << std::endl;
	*this = other;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << name << " attacks " << target ;
	std::cout << " causing " << Hitp << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(uint32_t amount) {

	if (Hitp - amount < 0)
        Hitp = 0;
    else if (Hitp == 0)
        return ;
    else
	    Hitp -= amount;
	std::cout << "<" << name << "> * takes damage for "<< amount << " hit points *" << std::endl;
}

void ClapTrap::beRepaired(uint32_t amount) {
	Hitp += amount;
	std::cout << "ClapTrap "  << name << " got " << amount << " of Sweet life juice! " << std::endl;
}
