#include "../includes/Fixed.hpp"

Fixed::Fixed(){
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& cp){
	*this = cp;
	std::cout<<"Copy constructor called"<<std::endl;
}

Fixed &Fixed::operator=(const Fixed &cp){
    if (this != &cp)
        this->fixedPointNb = cp.getRawBits();
    std::cout<<"Copy assignment operator called"<<std::endl;
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