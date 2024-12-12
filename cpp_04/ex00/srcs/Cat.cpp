#include "../includes/Cat.hpp"

Cat::Cat(){
    std::cout<<"[CAT] default constructor called" <<std::endl;
    setType("CAT");
}

Cat::~Cat(){
    std::cout<<"[CAT] default destructor called" <<std::endl;
}

void    Cat::makeSound() const{
    std::cout<<"[CAT] say \"Miaaaou\""<< std::endl;
}
