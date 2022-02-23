#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> num;

    num.push_back(99);
    num.push_back(8);
    num.push_back(15);
    num.push_back(3);
    try
    {
        std::cout << *easyfind(num, 99) << std::endl;
    }
    catch(std::exception &c)
    {
        std::cerr << c.what() << std::endl;
    }
}