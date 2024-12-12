#include "../includes/Animal.hpp"

// default constructor (Orthodox Canonical Form)
Animal::Animal(){
    std::cout<<"[ANIMAL] default constructor called" <<std::endl;
}

// constructor with parameters (Orthodox Canonical Form)
Animal::Animal(std::string _type){
    setType(_type);
    std::cout<<"[ANIMAL] constructor with type called" <<std::endl;
}

// copy constructor (Orthodox Canonical Form)
Animal::Animal(const Animal& cp){
    std::cout<<"[ANIMAL] Copy constructor called"<<std::endl;
	*this = cp;
}

// assignment operator (Orthodox Canonical Form)
Animal &Animal::operator=(const Animal &cp){
    std::cout<<"[ANIMAL] Copy assignment operator called"<<std::endl;
    if (this != &cp)
        this->type = cp.type;
    return *this;
}

// default destructor (Orthodox Canonical Form)
Animal::~Animal(){
    std::cout<<"[ANIMAL] default destructor called" <<std::endl;
}

//set animal type
void    Animal::setType(std::string _type){
    this->type = _type;
}

//get animal type
std::string    Animal::getType() const {
    return (this->type);
}

// make animal sound
void    Animal::makeSound() const{
    std::cout<<"[ANIMAL] make a sound"<< std::endl;
}
