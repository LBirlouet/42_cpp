#include "../includes/Fixed.hpp"

// constructor
Fixed::Fixed(){
    std::cout<<"Default constructor called"<<std::endl;
    this->fixedPointNb = 0;
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
        this->fixedPointNb = cp.getRawBits();
    return *this;
}

// recover raw bits
int Fixed::getRawBits(void)const {
    std::cout<<"getRawBits member function called"<<std::endl;
    return this->fixedPointNb;
}

// change raw bits
void    Fixed::setRawBits(int const raw){
    this->fixedPointNb = raw;
}