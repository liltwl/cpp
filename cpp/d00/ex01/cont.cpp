#include "cont.hpp"

using namespace std;

void	print10int(int str)
{
	int i;
	int	j;
	string s;

	s = to_string(str);
	j = s.size();
	i = 0;
	while (i < 10)
	{
		while (i < (10 - j))
		{
			cout << " ";
			i++;
		}
		if (s[(10 - j) - i])
		{
			cout << (s[(10 - j) - i]);
			i++;
		}
	}
}

void	print10cara(string str)
{
	int i;
	int	size;

	size = str.size();
	i = 0;
	if (size == 10)
	{
		cout << str;
		i = 10;
	}
	while (i < 9)
	{
		if (str[i])
			cout << str[i++];
		else
		{
			while (i < 10)
			{
				cout << " ";
				i++;
			}
		}
	}
	if (i == 9 && str[i + 1])
		cout << ".";
	else if (i != 10)
		cout << " ";
}

contact::contact(string  _fname,string  _lname, string _nname, string  _phnum, string _drksecret, int _id)
{
	fname = _fname;
	lname = _lname;
	nname = _nname;
	phnum = _phnum;
	drksecret = _drksecret;
	id = _id;
}
string contact::getfname()
{
	return (fname);
}
string contact::getlname()
{
	return (lname);
}
string contact::getnname()
{
	return (nname);
}
string contact::getphnum()
{
	return (phnum);
}
string contact::getsecret()
{
	return (drksecret);
}
void	contact::printcontact()
{
	cout << "|";
	print10int(id);
	cout << "|";
	print10cara(fname);
	cout << "|";
	print10cara(lname);
	cout << "|";
	print10cara(nname);
	cout << "|";
	cout << endl;
}

void printcontid(contact *c)
{
	cout << "first name     : " << c->getfname() << endl;
	cout << "last name      : " << c->getlname() << endl;
	cout << "nickname       : " << c->getnname() << endl;
	cout << "phone number   : " << c->getphnum() << endl;
	cout << "darkest secret : " << c->getsecret() << endl;
}

contact *addcontact(int id)
{
    contact *cc;
    string  fname;
    string  lname;
    string  nname;
	string     phnum;
    string  drksecret;

	cout << "first name :" << endl;
	getline(cin, fname);
	cout << "last name :" << endl;
	getline(cin, lname);
	cout << "nickname :" << endl;
	getline(cin, nname);
	cout << "phone number :" << endl;
	getline(cin, phnum);
	cout << "darkest secret :" << endl;
	getline(cin, drksecret);
	cc = new contact(fname, lname, nname, phnum, drksecret, id);
	return (cc);
}

void	search(contact **cont)
{
	int j;
	int k;

	j = -1;
	cout << "|";
	print10cara("index");
	cout << "|";
	print10cara("first name");
	cout << "|";
	print10cara("last name");
	cout << "|";
	print10cara("nickname");
	cout << "|";
	cout << endl;
	cout << "--------------------------------------------" << endl;
	while (cont[++j])
		cont[j]->printcontact();
	cout << "index : ";
	cin >> k;
	if (!(cin.good()) || !cont[k])
	{
		std::cin.clear();
		std::cin.ignore(99, '\n');
		cout << "invalid index";
		k = -1;
	}
	cout << endl;
	if (k >= 0 && k < 8 && cont[k])
		printcontid(cont[k]);
}
int main()
{
    int i;
	contact *cont[9];
	string ss;
	i = 0;
	while (cont[i])
		cont[i++] = nullptr;
	i = 0;
    while (1)
	{
		cout << "$> ";
		getline(cin, ss, '\n');
		if (ss == "ADD")
		{
			if (cont[i] != nullptr)
				delete(cont[i]);
			cont[i] = addcontact(i);
			i++;
		}
		else if (ss == "SEARCH")
			search(cont);
		else if (ss == "EXIT")
			exit (0);
		if (i == 8)
			i = 0;
		ss.clear();
	}
	return (0);
}
