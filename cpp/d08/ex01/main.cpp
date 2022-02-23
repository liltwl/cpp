#include "span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        Span s(sp);
        //s = sp;

        std::cout << s.shortestSpan() << std::endl;
        std::cout << s.longestSpan() << std::endl;
        //std::cout << s.longestSpan() << std::endl;
    }
    catch(std::exception &c)
    {
        std::cerr << c.what() << std::endl;
    }
}
