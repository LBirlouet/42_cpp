#include "../includes/Cat.hpp"
// default constructor (Orthodox Canonical Form)

Cat::Cat(){
    std::cout<<"[CAT] default constructor called" <<std::endl;
    setType("CAT");
    this->brain = new Brain();
}

// copy constructor (Orthodox Canonical Form)
Cat::Cat(const Cat& cp) : Animal(cp) {
    std::cout<<"[CAT] Copy constructor called"<<std::endl;
    this->brain = new Brain(*cp.brain);
    setType(cp.getType());
}

// assignment operator (Orthodox Canonical Form)
Cat &Cat::operator=(const Cat &cp){
    std::cout<<"[CAT] Copy assignment operator called"<<std::endl;
    if (this != &cp){
        setType(cp.getType());
        delete this->brain;
        this->brain = new Brain(*cp.brain);
    }
    return *this;
}

// default destructor (Orthodox Canonical Form)
Cat::~Cat(){
    std::cout<<"[CAT] default destructor called" <<std::endl;
    delete this->brain;
}

// make animal sound
void    Cat::makeSound() const{
    std::cout<<"[CAT] say \"Miaaaou\""<< std::endl;
}