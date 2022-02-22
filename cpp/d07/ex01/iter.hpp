#ifndef __ITER_HPP__
#define __ITER_HPP__

template <typename T>
void iter(T *array, int len, void (*f)(T const &ch))
{
    int i = 0;
    while (i < len)
    {
        (*f)(array[i]);
        i++;
    }
}

template <typename T>
void print(T const &ch)
{
    std::cout << ch << std::endl;
}

#endif