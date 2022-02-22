#include "array.hpp"

template <typename T>
Array::Array(): n(0), ar(NULL)
{
    std::cout << "default const called" << std::endl;
    ar = new T();
}
template <typename T>
Array<T>::~Array()
{
    std::cout << "deconst called" << std::endl;
    delete[] (ar);
}

template <typename T>
Array<T>::Array(u_int _n): n(_n), ar(NULL)
{
    std::cout << "const called" << std::endl;
    ar = new T[n];
}

template <typename T>
Array<T>::Array(Array<T> const &other): n(0), ar(NULL)
{
    n = other.n;
    ar = new T[n];
    *this = other;
}


template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &other)
{
    if (this != &other)
    {
        if (n > 0)
            delete[] (ar);
        n = other.n;
        ar = new T[n];
        int i = 0;
        while (i < n)
        {
            ar[i] = other.ar[i];
            i++;
        }
    }
    return (*this);
}

template<typename T>
const char* Array<T>::outofbounds::what() const throw()
{
    return ("index is out of bounds.");
}

template<typename T>
const T &Array<T>::operator[](int index) const
{
    if (index >= n)
        throw outofbounds();
    return ar[index];
}

template<typename T>
T &Array<T>::operator[](int index)
{
    if (index >= n)
        throw outofbounds();
    return ar[index];
}

template<typename T>
size_t  Array<T>::size(void)
{
    return (n);
}
