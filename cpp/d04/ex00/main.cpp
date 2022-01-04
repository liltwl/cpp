
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog("sarokh");
const Animal* i = new Cat("zabi");
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
}