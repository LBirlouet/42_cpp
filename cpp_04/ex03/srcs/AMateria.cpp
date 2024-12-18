#include "../includes/AMateria.hpp"

// default constructor (Orthodox Canonical Form)
AMateria::AMateria(){
    std::cout<<"[AMateria] default constructor called" <<std::endl;
}

// copy constructor (Orthodox Canonical Form)
AMateria::AMateria(const AMateria& cp) {
    std::cout<<"[AMateria] Copy constructor called"<<std::endl;
	*this = cp;
}

// assignment operator (Orthodox Canonical Form)
AMateria &AMateria::operator=(const AMateria &cp){
    std::cout<<"[AMateria] Copy assignment operator called"<<std::endl;
    if (this != &cp)
        this->type = cp.type;
    return *this;
}

// default destructor (Orthodox Canonical Form)
AMateria::~AMateria(){
    std::cout<<"[AMateria] default destructor called" <<std::endl;
}