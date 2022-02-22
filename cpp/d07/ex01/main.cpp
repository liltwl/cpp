#include <string>
#include <iostream>
#include "iter.hpp"

int main()
{
    char str[25] = "omar rajal mzyan, wlh...";

    iter<char>(str, 24, &print);
}