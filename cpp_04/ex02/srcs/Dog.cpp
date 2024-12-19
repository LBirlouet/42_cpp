#include "../includes/Dog.hpp"

// default constructor (Orthodox Canonical Form)
Dog::Dog(){
    std::cout<<"[DOG] default constructor called" <<std::endl;
    this->brain = new Brain();
    setType("DOG");
}

// copy constructor (Orthodox Canonical Form)
Dog::Dog(const Dog& cp) : Animal(cp) {
    std::cout<<"[DOG] Copy constructor called"<<std::endl;
    this->brain = new Brain(*cp.brain);
    setType(cp.getType());
}

// assignment operator (Orthodox Canonical Form)
Dog &Dog::operator=(const Dog &cp){
    std::cout<<"[DOG] Copy assignment operator called"<<std::endl;
    if (this != &cp){
        setType(cp.getType());
        delete this->brain;
        this->brain = new Brain(*cp.brain);
    }
    return *this;
}

// default destructor (Orthodox Canonical Form)
Dog::~Dog(){
    std::cout<<"[DOG] default destructor called" <<std::endl; 
    delete this->brain;
}

// make animal sound
void    Dog::makeSound() const{
    std::cout<<"[DOG] say \"Waouuuf\""<< std::endl;
}