#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include "replace.hpp"

Replace::Replace(std::ifstream &_file, std::ofstream &_newfile, std::string _s1, std::string _s2) : 
file(_file), newfile(_newfile)
{
    s1 = _s1;
    s2 = _s2;
}


int Replace::replacefile()
{
    std::string line;

    if (!file.is_open() || !newfile.is_open())
        return 1;
    if (s1.empty() || s2.empty())
        return 1;
    while (!file.eof())
    {
        getline(file, line, '\n');
        replaceline(line);
        if (!file.eof())
            newfile << "\n";
        line.clear();
    }
    std::cout << "done" << std::endl;
    return 0;
}

void Replace::replaceline(std::string line)
{
    int i,j;

    i = 0;
    while (i < line.length())
    {
        j = 0;
        while (j < s1.length() && line[i + j] == s1[j])
            j++;
        if (j == s1.length())
        {
            newfile << s2;
            i += j;
        }
        else
            newfile << line[i++];
    }
}
    
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
    newfile.open(line + ".bin", std::ios::trunc);
    replace = new Replace(file, newfile, s[2], s[3]);
    replace->replacefile();
    //std::getline(file, line, '\n');
  //  std::cout << s[1][0] << std::endl;
    //newfile << line;
    //std::getline(file, line);
    //std::cout << line << std::endl;

    file.close();
    newfile.close();
    return 0;
}