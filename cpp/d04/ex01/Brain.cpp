
#include "Brain.hpp"


/*Brain::Brain(const std::string str[])
{
    ideas = str;
	std::cout << "Brain constructor called" << std::endl;
}
*/
Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

/*Brain &Brain::operator=(Brain const & other)
{
	if (this != &other) {
		std::cout << "Brain copy assignment operator" << std::endl;
		ideas = other.ideas;
	}
	return *this;
}
*/
Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor." << std::endl;
	*this = other;
}