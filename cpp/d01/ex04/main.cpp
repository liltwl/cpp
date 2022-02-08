#include "replace.hpp"

int main(int i, char **s)
{
    std::string line;
    std::ifstream file;
    std::ofstream newfile;
    Replace *replace;

    if (i != 4)
        return 1;
    line = s[1];
    file.open(line);
    newfile.open(line + ".replace", std::ios::trunc);
    replace = new Replace(file, newfile, s[2], s[3]);
    replace->replacefile();

    file.close();
    newfile.close();
    return 0;
}
