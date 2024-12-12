#include "../includes/Animal.hpp"

Animal::Animal(){
    std::cout<<"[ANIMAL] default constructor called" <<std::endl;
}

Animal::Animal(std::string _type){
    setType(_type);
    std::cout<<"[ANIMAL] constructor with type called" <<std::endl;
}

Animal::~Animal(){
    std::cout<<"[ANIMAL] default destructor called" <<std::endl;
}

void    Animal::setType(std::string _type){
    this->type = _type;
}

std::string    Animal::getType() const {
    return (this->type);

}


void    Animal::makeSound() const{
    std::cout<<"[ANIMAL] make a sound"<< std::endl;
}
