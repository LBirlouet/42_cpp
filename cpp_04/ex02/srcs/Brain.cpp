#include "../includes/Brain.hpp"

// default constructor (Orthodox Canonical Form)
Brain::Brain(){
    std::cout<<"[BRAIN] Default constructor called" <<std::endl;
}

// copy constructor (Orthodox Canonical Form)
Brain::Brain(const Brain& cp){
    std::cout<<"[BRAIN] Copy constructor called"<<std::endl;
	*this = cp;
}

// assignment operator (Orthodox Canonical Form)
Brain &Brain::operator=(const Brain &cp){
    std::cout<<"[BRAIN] Copy assignment operator called"<<std::endl;
    if (this != &cp){
        for (int i = 0; i < 100; i++)
            this->ideas[i] = cp.ideas[i];
    }
    return *this;
}

// default destructor (Orthodox Canonical Form)
Brain::~Brain(){
    std::cout<<"[BRAIN] Default destructor called" <<std::endl;
}