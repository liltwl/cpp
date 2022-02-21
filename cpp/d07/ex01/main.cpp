#include <string>
#include <iostream>

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
    std::cout << ch ;
}

int main()
{
    char str[25] = "omar rajal mzyan, wlh...";

    iter<char>(str, 24, &print);
}