#pragma once

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

class no_occur : public std::exception
{
    public : 
        const char* what() const throw()
        {
            return ("no occurrence is found.");
        }
};


template <typename T>
typename T::iterator easyfind(T &a, int i)
{
    typename T::iterator tmp = std::find(a.begin(), a.end(), i);
    if (tmp == a.end())
        throw no_occur();
    return tmp;
}
