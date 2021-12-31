#include "Fixed.hpp"

Fixed::Fixed()
{
    fp = 0;
}

Fixed::~Fixed()
{
    std::cout << "ana mat" << std::endl;
}

Fixed::Fixed(const Fixed &_Fixed) 
{
    std::cout << "ana howa copy const" << std::endl;
    fp = _Fixed.fp;
}

int Fixed::getRawBits(void)
{
    return (fp);
}

void Fixed::setRawBits(int const raw)
{
    fp = raw;
}

Fixed& Fixed::operator= (const Fixed &_Fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fp = _Fixed.fp;
    return (*this);
}



Fixed::Fixed(const int i)
{
    fp = i << fbits;
}

Fixed::Fixed(const float i)
{
    fp = roundf(i * (1 << fbits));
}

int Fixed::toInt(void)
{
    return (fp >> fbits);
}

float Fixed::toFloat()
{
    return ((float)fp / (float)(1 << fbits));
}

std::ostream& operator<< (std::ostream &out, Fixed &_Fixed)
{
    out << _Fixed.toFloat();
    return (out);
}




bool Fixed::operator>(Fixed const &_Fixed) const
{
	return (this->getRawBits() > _Fixed.getRawBits());
}

bool Fixed::operator<(Fixed const &_Fixed) const
{
	return (this->getRawBits() < _Fixed.getRawBits());
}

bool Fixed::operator>=(Fixed const &_Fixed) const
{
	return (this->getRawBits() >= _Fixed.getRawBits());
}

bool Fixed::operator<=(Fixed const &_Fixed) const
{
	return (this->getRawBits() <= _Fixed.getRawBits());
}

bool Fixed::operator==(Fixed const &_Fixed) const
{
	return (this->getRawBits() == _Fixed.getRawBits());
}

bool Fixed::operator!=(Fixed const &_Fixed) const
{
	return (this->getRawBits() != _Fixed.getRawBits());
}

int main( void ) {
Fixed a(4);
Fixed b( a );
Fixed c(8.25f);
Fixed d(1234.4321f);

//c = a;
//std::cout << c.getfp() <<  " " << std::endl;
std::cout << a << " yoo " << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;

std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;

std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;

return 0;
}