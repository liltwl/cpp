#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
	type = "";
}

Animal::Animal(const std::string &_type) : type(_type) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const & other) {
	if (this != &other) {
		std::cout << "Animal copy assignment operator" << std::endl;
		type = other.type;
	}
	return *this;
}

Animal::Animal(const Animal &other) {
	std::cout << "Animal copy constructor." << std::endl;
	*this = other;
}

void Animal::makeSound(void) const
{
    std::cout << "??" << std::endl;
}

const std::string &Animal::getType(void) const
{
    return (type);
}
