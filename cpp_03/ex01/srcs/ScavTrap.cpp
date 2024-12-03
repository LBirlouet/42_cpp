#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name){
    std::cout<<"ScavTrap constructor called for " << Name <<std::endl;

}

ScavTrap::~ScavTrap(){
    std::cout<<"ScavTrap destructor called for " << this->name <<std::endl;

}