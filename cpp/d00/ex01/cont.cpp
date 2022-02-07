#include "cont.hpp"
#include "phonebook.hpp"

contact::contact()
{
	std::cout << "contact const called" << std::endl;
	empty = 1;

}

void	print10int(int str)
{
	int i;
	int	j;
	std::string s;

	s = std::to_string(str);
	j = s.size();
	i = 0;
	while (i < 10)
	{
		while (i < (10 - j))
		{
			std::cout << " ";
			i++;
		}
		if (s[(10 - j) - i])
		{
			std::cout << (s[(10 - j) - i]);
			i++;
		}
	}
}

void	print10cara(std::string str)
{
	int i;
	int	size;

	size = str.size();
	i = 0;
	if (size == 10)
	{
		std::cout << str;
		i = 10;
	}
	while (i < 9)
	{
		if (str[i])
			std::cout << str[i++];
		else
		{
			while (i < 10)
			{
				std::cout << " ";
				i++;
			}
		}
	}
	if (i == 9 && str[i + 1])
		std::cout << ".";
	else if (i != 10)
		std::cout << " ";
}

contact::contact(std::string  _fname,std::string  _lname, std::string _nname, std::string  _phnum, std::string _drksecret, int _id)
{
	fname = _fname;
	lname = _lname;
	nname = _nname;
	phnum = _phnum;
	drksecret = _drksecret;
	id = _id;
	empty = 0;
}
std::string contact::getfname()
{
	return (fname);
}
std::string contact::getlname()
{
	return (lname);
}
std::string contact::getnname()
{
	return (nname);
}
std::string contact::getphnum()
{
	return (phnum);
}
std::string contact::getsecret()
{
	return (drksecret);
}
void	contact::printcontact()
{
	std::cout << "|";
	print10int(id);
	std::cout << "|";
	print10cara(fname);
	std::cout << "|";
	print10cara(lname);
	std::cout << "|";
	print10cara(nname);
	std::cout << "|";
	std::cout << std::endl;
}

int		contact::isempty()
{
	return (empty);
}
void printcontid(contact *c)
{
	std::cout << "first name     : " << c->getfname() << std::endl;
	std::cout << "last name      : " << c->getlname() << std::endl;
	std::cout << "nickname       : " << c->getnname() << std::endl;
	std::cout << "phone number   : " << c->getphnum() << std::endl;
	std::cout << "darkest secret : " << c->getsecret() << std::endl;
}

int main()
{
    int i;
	phonebook pp;
	std::string ss;

	i = 0;
    while (1)
	{
		std::cout << "$> ";
		getline(std::cin, ss, '\n');
		if (ss == "ADD")
		{
			if (pp.add(i))
				i++;
		}
		else if (ss == "SEARCH")
			pp.search();
		else if (ss == "EXIT" || !std::cin.good())
		{
			break ;
		}
		if (i == 8)
			i = 0;
		ss.clear();
	}
	return (0);
}
