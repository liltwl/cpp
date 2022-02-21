#include <string>
#include <iostream>

template <typename T>
class Array
{
    private :
        T   *ar;
        u_int n;
    
    public :
        Array(): n(0), ar(NULL)
        {
            std::cout << "default const called" << std::endl;
            ar = new T();
        }

        ~Array()
        {
            std::cout << "deconst called" << std::endl;
            delete[] (ar);
        }
        Array(u_int _n): n(_n), ar(NULL)
        {
            std::cout << "const called" << std::endl;
            ar = new T[n];
        }
        Array(Array<T> const &other): n(0), ar(NULL)
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
                int i = 0;
                while (i < n)
                {
                    ar[i] = other.ar[i];
                    i++;
                }
            }
            return (*this)
        }

        class outofbounds : public std::exception
        {   public : 
                const char* what() const throw()
                {
                    return ("index is out of bounds.");
                }
        };

        Array<T> &operator[](int index)
        {
            if (index >= n)
                throw outofbounds();
            return ar[index];
        }
};
