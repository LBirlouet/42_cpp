#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed
{

public:

    Fixed();
    Fixed(const Fixed& cp);
	~Fixed();

    Fixed   &operator = (const Fixed &cp);

    int     getRawBits(void) const;
	void    setRawBits(int const raw);


private:

    int fixedPointNb;
    static const int fractionalBitsNb = 8;

};

#endif