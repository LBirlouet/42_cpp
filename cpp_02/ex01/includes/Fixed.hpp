#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed
{

public:

    Fixed();
    Fixed(const int i);
    Fixed(const float i);
	~Fixed();
    Fixed   &operator = (const Fixed &cp);
    int     getRawBits(void) const;
	void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
private:

    int fixedValue;
    static const int fractionalBitsValue = 8;

};

#endif