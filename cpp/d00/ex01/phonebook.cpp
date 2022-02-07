#include "phonebook.hpp"
#include "cont.hpp"

phonebook::phonebook()
{
    std::cout << "phonebook const called" << std::endl;
}

phonebook::~phonebook()
{
    std::cout << "phonebook deconst called" << std::endl;
}

void phonebook::search()
{
   	int j;
	int k;

	j = -1;
	std::cout << "|";
	print10cara("index");
	std::cout << "|";
	print10cara("first name");
	std::cout << "|";
	print10cara("last name");
	std::cout << "|";
	print10cara("nickname");
	std::cout << "|";
	std::cout << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	while (!(cont[++j].isempty()))
		cont[j].printcontact();
	std::cout << "index : ";
	std::cin >> k;
	if (!(std::cin.good()) || cont[k].isempty())
	{
		std::cout << "invalid index" << std::endl;
		k = -1;
	}
	std::cin.clear();
	std::cin.ignore(99, '\n');
	if (k >= 0 && k < 8 && !(cont[k].isempty()))
		printcontid(&cont[k]);
}


int phonebook::add(int id)
{
    std::string  fname;
    std::string  lname;
    std::string  nname;
	std::string     phnum;
    std::string  drksecret;

	std::cout << "first name :" << std::endl;
	getline(std::cin, fname);
	std::cout << "last name :" << std::endl;
	getline(std::cin, lname);
	std::cout << "nickname :" << std::endl;
	getline(std::cin, nname);
	std::cout << "phone number :" << std::endl;
	getline(std::cin, phnum);
	std::cout << "darkest secret :" << std::endl;
	getline(std::cin, drksecret);
	if (fname.empty() && lname.empty() && nname.empty() && phnum.empty() && drksecret.empty())
	{
		std::cout << "error: empty fields." << std::endl;
		return (0);
	}
	cont[id] = contact(fname, lname, nname, phnum, drksecret, id);
	return (1);
}