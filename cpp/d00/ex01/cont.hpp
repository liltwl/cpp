#include <iostream>
#include <string>

class contact {
    private:
        int             id;
        std::string     fname;
        std::string		lname;
        std::string		nname;
        std::string		phnum;
        std::string		drksecret;
    
    public:
        contact(std::string  _fname,std::string  _lname, std::string _nname, std::string  _phnum, std::string _drksecret, int _id);
        std::string getfname();
        std::string getlname();
        std::string getnname();
        std::string getphnum();
        std::string getsecret();
		void	printcontact();
};