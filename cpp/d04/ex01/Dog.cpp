#include "Dog.hpp"

Dog::Dog(std::string const &_type) : Animal(_type)
{
	std::cout << "Dog constructor called" << std::endl;
	_Brain = new Brain();
}

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	_Brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete _Brain;
}

Dog &Dog::operator=(Dog const & other)
{
	if (this != &other) {
		std::cout << "Dog copy assignment operator" << std::endl;
		type = other.type;
	}
	return *this;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor." << std::endl;
	*this = other;
}

void Dog::makeSound(void) const
{
    std::cout << "haaww haaaww" << std::endl;
}

const std::string &Dog::getType(void) const
{
    return (Animal::getType());
}
