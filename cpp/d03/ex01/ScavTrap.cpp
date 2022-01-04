
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap constructor called" << std::endl;
	name = "";
	Hitp = 100;
	Energyp = 50;
	Attackp = 20;
}

ScavTrap::ScavTrap(const std::string &pName){
	std::cout << "ScavTrap constructor called" << std::endl;
	name = pName;
    Hitp = 10;
	Energyp = 10;
	Attackp = 0;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & other) {
	if (this != &other) {
		std::cout << "ScavTrap copy assignment operator" << std::endl;
		name = other.name;
		Hitp = other.Hitp;
		Energyp = other.Energyp;
		Attackp = other.Attackp;
	}
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "ScavTrap copy constructor." << std::endl;
	*this = other;
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << name << " attacks " << target ;
	std::cout << " causing " << Hitp << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}