#include "../includes/WrongCat.hpp"

// default constructor (Orthodox Canonical Form)
WrongCat::WrongCat(){
    std::cout<<"[WRONG CAT] default constructor called" <<std::endl;
    setType("WRONG CAT");
}

// copy constructor (Orthodox Canonical Form)
WrongCat::WrongCat(const WrongCat& cp) : WrongAnimal(cp) {
    std::cout<<"[WRONG CAT] Copy constructor called"<<std::endl;
	*this = cp;
}

// assignment operator (Orthodox Canonical Form)
WrongCat &WrongCat::operator=(const WrongCat &cp){
    std::cout<<"[WRONG CAT] Copy assignment operator called"<<std::endl;
    if (this != &cp)
        setType(getType());
    return *this;
}

// default destructor (Orthodox Canonical Form)
WrongCat::~WrongCat(){
    std::cout<<"[WRONG CAT] default destructor called" <<std::endl;
}

// make animal sound
void    WrongCat::makeSound() const{
    std::cout<<"[WRONG CAT] say \"Miaaaou\""<< std::endl;
}
