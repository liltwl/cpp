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
        int getRawBits( void) const;
        void setRawBits(int const raw);

        Fixed(const int i);
        Fixed(const float i);
        float toFloat(void) const;
        int toInt(void) const;

        bool operator>(Fixed const &_Fixed) const;
        bool operator<(Fixed const &_Fixed) const;
        bool operator>=(Fixed const &_Fixed) const;
        bool operator<=(Fixed const &_Fixed) const;
        bool operator==(Fixed const &_Fixed) const;
        bool operator!=(Fixed const &_Fixed) const;
        
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);

        Fixed &min(Fixed &f1, Fixed &f2);
        const Fixed &min(const Fixed &f1, const Fixed &f2);
        Fixed &max(Fixed &f1, Fixed &f2);
        const Fixed &max(const Fixed &f1, const Fixed &f2);
};
std::ostream& operator<< (std::ostream &out, const Fixed &_Fixed);
