#include <string>
#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

template<typename T>
T min(T a, T b)
{
    return (a < b ? a : b);
}

template<typename T>
T max(T a, T b)
{
    return (a > b ? a : b);
}

int main()
{
    int i = 45;
    int y = 5;

    swap<int>(i, y);

    std::cout << "i = " << i << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "max = " << max<int>(i,y) << std::endl;
    std::cout << "min = " << min<int>(i,y) << std::endl;

}