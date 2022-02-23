#pragma once

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <list>


template<typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack() : std::stack<T>(){}
        MutantStack(MutantStack<T> const &other): std::stack<T>(other){}
        ~MutantStack(){}

        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack<T> &operator= (MutantStack<T> const &other)
        {
            this->c = other.c;
	        return (*this);
        }

        iterator end()
        {
            return this->c.end();
        }
        iterator begin()
        {
            return this->c.begin();
        }
};