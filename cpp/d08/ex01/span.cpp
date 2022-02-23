#include "span.hpp"

Span::Span(): n(0)
{
    std::cout << "span default const called" << std::endl;
}

Span::Span(int _n): n(_n)
{
    std::cout << "span const called" << std::endl;
}

Span::~Span()
{
    std::cout << "span deconst called" << std::endl;
}

Span::Span(Span const &other) : n(0)
{
    n = other.n;
    if (!other.num.empty())
        num = other.num;
    std::cout << "span const called" << std::endl;
}
Span& Span::operator=(Span const &other)
{
    if (this != &other)
    {
        n = other.n;
        num.clear();
        num = other.num;
    }
    return (*this);
}
void Span::addNumber(int a)
{
    if (n == num.size())
        throw outofsize();
    num.push_back(a);
}

void Span::addNumber()
{
    int i = num.size();

    if (n == num.size())
        throw outofsize();
    
    num.push_back();
}


int Span::shortestSpan()
{
    std::vector<int>::iterator first;
    std::vector<int>::iterator next;
    int     shortest;
    int     tmp;

    if (n <= 1 || num.size() <= 1)
        throw nonum();
    first = num.begin();
    next = ++num.begin();
    shortest = std::abs( *first - *next);
    while (next != num.end())
    {
        tmp = std::abs( *first - *next);
        if (tmp < shortest)
            shortest = tmp;
        ++first;
        ++next;
    }
    return shortest;
}

int Span::longestSpan(void)
{
    std::vector<int>::iterator max;
    std::vector<int>::iterator min;

    if (n <= 1 || num.size() <= 1)
        throw nonum();
    max = max_element(num.begin(), num.end());
    min = min_element(num.begin(), num.end());

    return (std::abs(*max - *min));
}