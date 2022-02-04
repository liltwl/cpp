#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include "cont.hpp"

class contact;

class phonebook {
    private :
        contact cont[9];

    public :
        phonebook();
        ~phonebook();

        void search();
        void add();
};

#endif