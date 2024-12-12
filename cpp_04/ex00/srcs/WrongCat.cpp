#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout<<"[WRONG CAT] default constructor called" <<std::endl;
    setType("WRONG CAT");
}

WrongCat::~WrongCat(){
    std::cout<<"[WRONG CAT] default destructor called" <<std::endl;
}

void    WrongCat::makeSound() const{
    std::cout<<"[WRONG CAT] say \"Miaaaou\""<< std::endl;
}
