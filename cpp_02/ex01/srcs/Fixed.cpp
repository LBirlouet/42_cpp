#include "../includes/Fixed.hpp"
#include "iostream"

Fixed::Fixed(){
    std::cout<<"Default constructor called"<<std::endl;
    this->fixedValue = 0;
}

Fixed::Fixed(const int i){
    std::cout<<"Int constructor called"<<std::endl;
    this->fixedValue = i << fractionalBitsValue;
}

Fixed::Fixed(const float i){
    std::cout<<"Float constructor called"<<std::endl;
    this->fixedValue = static_cast<int>(i * (1 << fractionalBitsValue));
}

Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
}

Fixed &Fixed::operator=(const Fixed &cp){
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &cp)
        this->fixedValue = cp.getRawBits();
    return *this;
}

int Fixed::getRawBits(void)const {
    return this->fixedValue;
}

void    Fixed::setRawBits(int const raw){
    this->fixedValue = raw;
}

float Fixed::toFloat() const{
	return static_cast<float>(fixedValue) / (1 << fractionalBitsValue);
}

int Fixed::toInt() const{
	return fixedValue >> fractionalBitsValue;
}
