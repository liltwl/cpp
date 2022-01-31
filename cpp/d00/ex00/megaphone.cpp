#include <iostream>
#include <cctype>

int main(int arv, char **p)
{
  int i;
  int k;

  k = 1;
  if (arv <= 1)
  {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (1);
  }
  while (p[k])
  {
    i = 0;
    while (p[k][i])
    {
      if (std::isalpha(p[k][i]))
        std::cout << (char)std::toupper(p[k][i++]);
      else
        std::cout << p[k][i++];
    }
    k++;
  }
  std::cout << std::endl;
  return 0;
}
