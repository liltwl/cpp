#include "Cat.hpp"

Cat::Cat(const std::string &_type) : Animal(_type)
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const & other)
{
	if (this != &other) {
		std::cout << "Cat copy assignment operator" << std::endl;
		type = other.type;
	}
	return *this;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor." << std::endl;
	*this = other;
}

void const  Cat::makeSound(void) const
{
    std::cout << "maaa333333" << std::endl;
}

const std::string &Cat::getType(void) const
{
    return (Animal::getType());
}
