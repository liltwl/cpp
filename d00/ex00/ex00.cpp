#include <iostream>
using namespace std;

int ft_isalpha(char i)
{
  if(i < 97 || i > 122)
    return (0);
  return (1);
}

int main(int arv, char **p) {
  // std::cout << "Hello World!" << endl;

  int i;
  int k;
  i = 0;
  if (!p[1])
  {
    cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    return (1);
  }

  while (p[1][i])
  {
    std::cin >> k;
    if (ft_isalpha(p[1][i]) == 1)
      cout << (char)(p[1][i++] - 32);
    else
      cout << p[1][i++];
  }
  cout << endl;
  return 0;
}
