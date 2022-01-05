#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
const Animal* dd = new Dog();
const Animal* ss = new Cat();
const Animal* p[100];
int i,j;
int len;

len = 4;
i = j = 0;
while (i < len/2)
{
    p[i++] = new Dog();
}

while (i < len)
{
    p[i++] = new Cat();
}

while (j < len)
{
    delete p[j++];
}
ss->makeSound();
dd->makeSound();
//delete dd;//should not create a leak
delete ss;
}