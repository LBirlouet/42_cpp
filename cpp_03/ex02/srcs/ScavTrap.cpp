#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name){
    std::cout<<"ScavTrap constructor called for " << Name <<std::endl;

}

ScavTrap::~ScavTrap(){
    std::cout<<"ScavTrap destructor called for " << this->name <<std::endl;

}

void ScavTrap::attack(const std::string& target){
    if (this->health > 0){
        if (this->energyPoint > 0){
            this->energyPoint--;
            std::cout<<"ScavTrap "<< this->name <<" attacks "<< target <<", causing "<< this->attackDamage <<" points of damage!"""<<std::endl;
        }
        else
            std::cout<<"ScavTrap "<< this->name <<" try to attack "<< target <<" but he has not enough energy points"<<std::endl;
        }
    else
     std::cout<<"ScavTrap "<< this->name <<" try to attack "<< target <<" but he's already dead"<<std::endl;
}


void    ScavTrap::guardGate(){
    std::cout<<"ScavTrap " << this->name << " is now in Gate keeper mode"<< std::endl;
}
