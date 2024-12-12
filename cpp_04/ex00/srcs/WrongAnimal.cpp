#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout<<"[WRONG ANIMAL] default constructor called" <<std::endl;
}

WrongAnimal::WrongAnimal(std::string _type){
    setType(_type);
    std::cout<<"[WRONG ANIMAL] constructor with type called" <<std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout<<"[WRONG ANIMAL] default destructor called" <<std::endl;
}

void    WrongAnimal::setType(std::string _type){
    this->type = _type;
}

std::string    WrongAnimal::getType() const {
    return (this->type);
}


void    WrongAnimal::makeSound() const{
    std::cout<<"[WRONG ANIMAL] make a sound"<< std::endl;
}
