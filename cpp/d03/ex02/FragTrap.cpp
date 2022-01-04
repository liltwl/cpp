
#include "FragTrap.hpp"


FragTrap::FragTrap() {
	std::cout << "FragTrap constructor called" << std::endl;
	name = "";
	Hitp = 10;
	Energyp = 10;
	Attackp = 0;
}

FragTrap::FragTrap(const std::string &pName){
	std::cout << "FragTrap constructor called" << std::endl;
	name = pName;
	Hitp = 10;
	Energyp = 10;
	Attackp = 0;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & other) {
	if (this != &other) {
		std::cout << "FragTrap copy assignment operator" << std::endl;
		this->name = other.name;
		this->Hitp = other.Hitp;
		this->Energyp = other.Energyp;
		this->Attackp = other.Attackp;
	}
	return *this;
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "FragTrap copy constructor." << std::endl;
	*this = other;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high fives" << std::endl;
}
