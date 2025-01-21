#include "../includes/ScarlarConverter.hpp"

// default constructor (Orthodox Canonical Form)
ScarlarConverter::ScarlarConverter(){
    std::cout<<"[ScarlarConverter] default constructor called" <<std::endl;
}

// copy constructor (Orthodox Canonical Form)
ScarlarConverter::ScarlarConverter(const ScarlarConverter& cp){
    std::cout<<"[ScarlarConverter] Copy constructor called"<<std::endl;
    *this = cp;
}

// assignment operator (Orthodox Canonical Form)
ScarlarConverter& ScarlarConverter::operator=(const ScarlarConverter& cp){
	(void)cp;
    std::cout << "[Bureaucrat] Copy assignment operator called" << std::endl;
	return *this;
}

// default destructor (Orthodox Canonical Form)
ScarlarConverter::~ScarlarConverter(void){
    std::cout<<"[ScarlarConverter] default destructor called" <<std::endl;
}