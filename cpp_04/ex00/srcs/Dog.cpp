#include "../includes/Dog.hpp"

// default constructor (Orthodox Canonical Form)
Dog::Dog(){
    std::cout<<"[DOG] default constructor called" <<std::endl;
    setType("DOG");
}

// copy constructor (Orthodox Canonical Form)
Dog::Dog(const Dog& cp) : Animal(cp) {
    std::cout<<"[DOG] Copy constructor called"<<std::endl;
	*this = cp;
}

// assignment operator (Orthodox Canonical Form)
Dog &Dog::operator=(const Dog &cp){
    std::cout<<"[DOG] Copy assignment operator called"<<std::endl;
    if (this != &cp)
        setType(getType());
    return *this;
}

// default destructor (Orthodox Canonical Form)
Dog::~Dog(){
    std::cout<<"[DOG] default destructor called" <<std::endl;
}

// make animal sound
void    Dog::makeSound() const{
    std::cout<<"[DOG] say \"Waouuuf\""<< std::endl;
}