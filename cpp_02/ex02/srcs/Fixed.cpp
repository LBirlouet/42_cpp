#include "../includes/Fixed.hpp"
#include "iostream"

// constructor
Fixed::Fixed(){
    std::cout<<"Default constructor called"<<std::endl;
    this->fixedValue = 0;
}

// constructor for int
Fixed::Fixed(const int i){
    std::cout<<"Int constructor called"<<std::endl;
    this->fixedValue = i << fractionalBitsValue;
}

// constructor for float
Fixed::Fixed(const float i){
    std::cout<<"Float constructor called"<<std::endl;
    this->fixedValue = static_cast<int>(i * (1 << fractionalBitsValue));
}

// destructor
Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
}

/*-----------------------------------------------------------------------*/
// overload for output
std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
    os << fixed.toFloat();
    return os;
}
/*-----------------------------------------------------------------------*/

/*-----------------------------------------------------------------------*/
// convert to float
float Fixed::toFloat() const{
    return static_cast<float>(this->fixedValue) / (1 << fractionalBitsValue);
}

// convert to int
int Fixed::toInt() const{
	return fixedValue >> fractionalBitsValue;
}
/*-----------------------------------------------------------------------*/

/*-----------------------------------------------------------------------*/
// conparison operator
bool Fixed::operator>(const Fixed &other)const{
    return this->fixedValue > other.fixedValue;
}

bool Fixed::operator<(const Fixed &other)const{
    return this->fixedValue < other.fixedValue;
}

bool Fixed::operator<=(const Fixed &other) const{
    return this->fixedValue <= other.fixedValue;
}

bool Fixed::operator>=(const Fixed &other) const{
    return this->fixedValue >= other.fixedValue;
}

bool Fixed::operator==(const Fixed &other) const{
    return this->fixedValue == other.fixedValue;
}

bool Fixed::operator!=(const Fixed &other) const{
    return this->fixedValue != other.fixedValue;
}
/*-----------------------------------------------------------------------*/

/*-----------------------------------------------------------------------*/
// arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const{
    return Fixed(this->toFloat() / other.toFloat());
}
/*-----------------------------------------------------------------------*/

/*-----------------------------------------------------------------------*/
// pre-increment
Fixed& Fixed::operator++(){
    this->fixedValue++;
    return *this;
}

// post-increment
Fixed Fixed::operator++(int){
    Fixed temp = *this;
    this->fixedValue++;
    return temp;
}

// pre-decrement
Fixed& Fixed::operator--(){
    this->fixedValue--;
    return *this;
}

// post-decrement
Fixed Fixed::operator--(int){
    Fixed temp = *this;
    this->fixedValue--;
    return temp;
}
/*-----------------------------------------------------------------------*/


/*-----------------------------------------------------------------------*/
// min
Fixed &Fixed::min(Fixed &a, Fixed &b){
    return (a < b) ? a : b;
}

// min const
const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
    return (a < b) ? a : b;
}

// max
Fixed &Fixed::max(Fixed &a, Fixed &b){
    return (a > b) ? a : b;
}

// max const
const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
    return (a > b) ? a : b;
}
