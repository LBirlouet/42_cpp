#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string Name) : ClapTrap(Name){
    std::cout<<"FragTrap constructor called for " << Name <<std::endl;

}

FragTrap::~FragTrap(){
    std::cout<<"FragTrap destructor called for " << this->name <<std::endl;

}

void    FragTrap::highFivesGuys(){
    std::cout<<"FragTrap " << this->name << " gave a high five"<< std::endl;
}
