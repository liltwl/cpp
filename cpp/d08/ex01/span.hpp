#pragma once

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private :
        std::vector<int> num;
        u_int n;

    public :
        Span();
        Span(int _n);
        ~Span();
        Span(Span const &other);
        Span& operator= (Span const &other);
        class outofsize : public std::exception
        {
            public : 
                const char* what() const throw()
                {
                    return ("fiiin ghadi radakchi 3aamar.");
                }
        };

        class nonum : public std::exception
        {
            public : 
                const char* what() const throw()
                {
                    return ("no numbers stored.");
                }
        };

        void addNumber(int a);
        int shortestSpan(void);
        int longestSpan(void);
        void addNumber();
};


