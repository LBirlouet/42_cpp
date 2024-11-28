#include "../includes/Fixed.hpp"

Fixed::Fixed(){
    std::cout<<"Default constructor called"<<std::endl;
    this->fixedPointNb = 0;
}

Fixed::Fixed(const Fixed& cp){
    std::cout<<"Copy constructor called"<<std::endl;
	*this = cp;
}

Fixed &Fixed::operator=(const Fixed &cp){
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &cp)
        this->fixedPointNb = cp.getRawBits();
    return *this;
}

int Fixed::getRawBits(void)const {
    std::cout<<"getRawBits member function called"<<std::endl;
    return this->fixedPointNb;
}

void    Fixed::setRawBits(int const raw){
    this->fixedPointNb = raw;
}

Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
}