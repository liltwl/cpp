
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>

class Replace
{
    private :
        std::ifstream &file;
        std::ofstream &newfile;
        std::string s1;
        std::string s2;
    
    public :
        Replace(std::ifstream &_file, std::ofstream &_newfile, std::string s1, std::string s2);
        Replace();
        ~Replace();
        int    replacefile();
        void    replaceline(std::string line);

};