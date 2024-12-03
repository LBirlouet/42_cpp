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

// copy constructor
Fixed::Fixed(const Fixed& cp){
    std::cout<<"Copy constructor called"<<std::endl;
    *this = cp;
}

// destructor
Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
}

// overload for assignment operator
Fixed &Fixed::operator=(const Fixed &cp){
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &cp)
        this->fixedValue = cp.getRawBits();
    return *this;
}

// overload for output
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

// recover raw bits
int Fixed::getRawBits(void)const {
    return this->fixedValue;
}

// change raw bits
void    Fixed::setRawBits(int const raw){
    this->fixedValue = raw;
}

// convert to float
float Fixed::toFloat() const{
	return static_cast<float>(fixedValue) / (1 << fractionalBitsValue);
}

// convert to int
int Fixed::toInt() const{
	return fixedValue >> fractionalBitsValue;
}
