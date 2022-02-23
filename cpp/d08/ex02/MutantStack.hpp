#pragma once

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>


template<typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack(){}
        MutantStack(MutantStack<T> const &other){}
        ~MutantStack(){}

        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack<T> &operator= (MutantStack<T> const &other){}

        iterator end()
        {
            return this->c.end();
        }
        iterator begin()
        {
            return this->c.begin();
        }
};