#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed
{

public:

    Fixed();
    explicit Fixed(const int i);
    explicit Fixed(const float i);
    Fixed(const Fixed& cp);
	~Fixed();
   
    Fixed   &operator = (const Fixed &cp);
   
   
    int     getRawBits(void) const;
	void    setRawBits(int const raw);
    
    float   toFloat(void) const;
    int     toInt(void) const;

private:

    int fixedValue;
    static const int fractionalBitsValue = 8;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif