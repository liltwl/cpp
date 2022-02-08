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
