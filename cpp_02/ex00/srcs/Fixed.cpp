#include "../includes/Fixed.hpp"

Fixed::Fixed(){
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& cp){
}

Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
}