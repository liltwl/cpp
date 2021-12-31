#include <iostream>
#include <cctype>
#include <string>
#include <cmath>

class Fixed{
    private :
        int fp;
        static const int fbits = 8;
    
    public :
        Fixed();
        ~Fixed();
        Fixed& operator= (const Fixed &_Fixed);
        Fixed(const Fixed &_Fixed);
        int getRawBits( void);
        void setRawBits(int const raw);

        Fixed(const int i);
        Fixed(const float i);
        float toFloat(void);
        int toInt(void);

        bool operator>(Fixed const &_Fixed) const;
        bool operator<(Fixed const &_Fixed) const;
        bool operator>=(Fixed const &_Fixed) const;
        bool operator<=(Fixed const &_Fixed) const;
        bool operator==(Fixed const &_Fixed) const;
        bool operator!=(Fixed const &_Fixed) const;
};
std::ostream& operator<< (std::ostream &out, Fixed &_Fixed);
