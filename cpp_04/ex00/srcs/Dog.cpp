#include "../includes/Dog.hpp"

Dog::Dog(){
    std::cout<<"[DOG] default constructor called" <<std::endl;
    setType("DOG");
}

Dog::~Dog(){
    std::cout<<"[DOG] default destructor called" <<std::endl;
}

void    Dog::makeSound() const{
    std::cout<<"[DOG] say \"Waouuuf\""<< std::endl;
}