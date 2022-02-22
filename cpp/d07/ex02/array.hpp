#pragma once

#include <string>
#include <iostream>

template <typename T>
class Array
{
    private :
        T   *ar;
        size_t n;
    
    public :
        Array(): ar(NULL), n(0)
        {
            std::cout << "default const called" << std::endl;
            ar = new T();
        }

        ~Array()
        {
            std::cout << "deconst called" << std::endl;
            delete[] (ar);
        }
        Array(u_int _n): ar(NULL), n(_n)
        {
            std::cout << "const called" << std::endl;
            ar = new T[n];
        }
        Array(Array<T> const &other): ar(NULL), n(0)
        {
            n = other.n;
            ar = new T[n];
            *this = other;
        }

        Array<T> &operator=(Array<T> const &other)
        {
            if (this != &other)
            {
                if (n > 0)
                    delete[] (ar);
                n = other.n;
                ar = new T[n];
                size_t i = 0;
                while (i < n)
                {
                    ar[i] = other.ar[i];
                    i++;
                }
            }
            return (*this);
        }

        class outofbounds : public std::exception
        {   public : 
                const char* what() const throw()
                {
                    return ("index is out of bounds.");
                }
        };

        const T &operator[](int index) const
        {
            if (index < 0 || (size_t)index >= n)
                throw outofbounds();
            return ar[index];
        }

        T &operator[](int index)
        {
            if (index < 0 || (size_t)index >= n)
                throw outofbounds();
            return ar[index];
        }

        size_t  size(void ) const
        {
            return (n);
        }
};
