#include "../includes/WrongAnimal.hpp"

// default constructor (Orthodox Canonical Form)
WrongAnimal::WrongAnimal(){
    std::cout<<"[WRONG ANIMAL] default constructor called" <<std::endl;
}

// constructor with parameters (Orthodox Canonical Form)
WrongAnimal::WrongAnimal(std::string _type){
    setType(_type);
    std::cout<<"[WRONG ANIMAL] constructor with type called" <<std::endl;
}

// copy constructor (Orthodox Canonical Form)
WrongAnimal::WrongAnimal(const WrongAnimal& cp){
    std::cout<<"[WRONG ANIMAL] Copy constructor called"<<std::endl;
	*this = cp;
}

// assignment operator (Orthodox Canonical Form)
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cp){
    std::cout<<"[WRONG ANIMAL] Copy assignment operator called"<<std::endl;
    if (this != &cp)
        this->type = cp.type;
    return *this;
}

// default destructor (Orthodox Canonical Form)
WrongAnimal::~WrongAnimal(){
    std::cout<<"[WRONG ANIMAL] default destructor called" <<std::endl;
}

//set animal type
void    WrongAnimal::setType(std::string _type){
    this->type = _type;
}

//get animal type
std::string    WrongAnimal::getType() const {
    return (this->type);
}

// make animal sound
void    WrongAnimal::makeSound() const{
    std::cout<<"[WRONG ANIMAL] make a sound"<< std::endl;
}
