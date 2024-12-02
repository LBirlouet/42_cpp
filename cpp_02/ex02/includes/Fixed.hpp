#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed
{

public:

    Fixed();
    explicit Fixed(const int i);
    explicit Fixed(const float i);
	~Fixed();

    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

    float   toFloat(void) const;
    int     toInt(void) const;

    bool    operator>(const Fixed &other) const;
    bool    operator<(const Fixed &other) const;
    bool    operator<=(const Fixed &other) const;
    bool    operator>=(const Fixed &other) const;
    bool    operator==(const Fixed &other) const;
    bool    operator!=(const Fixed &other) const;

    Fixed   operator+(const Fixed &other) const;
    Fixed   operator-(const Fixed &other) const;
    Fixed   operator*(const Fixed &other) const;
    Fixed   operator/(const Fixed &other) const;
    
    Fixed   &operator++();
    Fixed   &operator--();
    Fixed   operator++(int);
    Fixed   operator--(int);
    
    static Fixed& min(Fixed& i, Fixed& j);
    static const Fixed& min(const Fixed& i, const Fixed& j);
    static Fixed& max(Fixed& i, Fixed& j);
    static const Fixed& max(const Fixed& i, const Fixed& j);

private:

    int fixedValue;
    static const int fractionalBitsValue = 8;

};

#endif