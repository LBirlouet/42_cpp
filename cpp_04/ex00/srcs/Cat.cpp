#include "../includes/Cat.hpp"

// default constructor (Orthodox Canonical Form)
Cat::Cat(){
    std::cout<<"[CAT] default constructor called" <<std::endl;
    setType("CAT");
}

// copy constructor (Orthodox Canonical Form)
Cat::Cat(const Cat& cp) : Animal(cp) {
    std::cout<<"[CAT] Copy constructor called"<<std::endl;
	*this = cp;
}

// assignment operator (Orthodox Canonical Form)
Cat &Cat::operator=(const Cat &cp){
    std::cout<<"[CAT] Copy assignment operator called"<<std::endl;
    if (this != &cp)
        setType(getType());
    return *this;
}

// default destructor (Orthodox Canonical Form)
Cat::~Cat(){
    std::cout<<"[CAT] default destructor called" <<std::endl;
}

// make animal sound
void    Cat::makeSound() const{
    std::cout<<"[CAT] say \"Miaaaou\""<< std::endl;
}
