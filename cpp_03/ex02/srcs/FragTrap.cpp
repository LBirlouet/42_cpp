#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string Name) : ClapTrap(Name){
    std::cout<<"FragTrap constructor called for " << Name <<std::endl;

}

FragTrap::~FragTrap(){
    std::cout<<"FragTrap destructor called for " << this->name <<std::endl;

}

void FragTrap::attack(const std::string& target){
    if (this->health > 0){
        if (this->energyPoint > 0){
            this->energyPoint--;
            std::cout<<"FragTrap "<< this->name <<" attacks "<< target <<", causing "<< this->attackDamage <<" points of damage!"""<<std::endl;
        }
        else
            std::cout<<"FragTrap "<< this->name <<" try to attack "<< target <<" but he has not enough energy points"<<std::endl;
        }
    else
     std::cout<<"FragTrap "<< this->name <<" try to attack "<< target <<" but he's already dead"<<std::endl;
}

void    FragTrap::highFivesGuys(){
    std::cout<<"FragTrap " << this->name << " gave a high five"<< std::endl;
}
