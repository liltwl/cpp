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

int Fixed::getRawBits(void) const
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

int Fixed::toInt(void) const
{
    return (fp >> fbits);
}

float Fixed::toFloat() const
{
    return ((float)fp / (float)(1 << fbits));
}

std::ostream& operator<< (std::ostream &out, const Fixed &_Fixed)
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

Fixed &Fixed::operator++(void)
{
    ++fp;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed f(*this);
    ++fp;
    return f;
}

Fixed &Fixed::operator--(void)
{
    --fp;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed f(*this);
    --fp;
    return f;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1.getRawBits() < f2.getRawBits())
        return f1;
    else 
        return f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1.getRawBits() < f2.getRawBits())
        return f1;
    else 
        return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return f1;
    else 
        return f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return f1;
    else 
        return f2;
}

int main( void ) {
Fixed  a(4);
Fixed const b( a );
Fixed c(8.25f);
Fixed const d(1234.4321f);

//c = a;
//std::cout << c.getfp() <<  " " << std::endl;
std::cout << a << " yoo " << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;

a.min(b, d);
std::cout << "a is " << a << std::endl;
//--a;
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