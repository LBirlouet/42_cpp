#include "../includes/ClapTrap.hpp"

// constructor
ClapTrap::ClapTrap(std::string Name){
    std::cout<<"Constructor called for " << Name <<std::endl;
    this->name = Name;
    this->health = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
}

// destructor
ClapTrap::~ClapTrap(){
    std::cout<<"Destructor called for " << this->name <<std::endl;
}

void ClapTrap::attack(const std::string& target){
if (this->health > 0){
    if (this->energyPoint > 0){
        this->energyPoint--;
        this->attackDamage++;
        this->energyPoint--;
        std::cout<<"ClapTrap "<< this->name <<" attacks "<< target <<", causing "<< this->attackDamage <<" points of damage!"""<<std::endl;
    }
    else
        std::cout<<"ClapTrap "<< this->name <<"try to attack "<< target <<"but he has not enough energy points"<<std::endl;
    }
else
    std::cout<<"ClapTrap "<< this->name <<"try to attack "<< target <<"but he's already dead"<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amout){
if ((this->health - amout) > 0){
    this->health = this->health - amout;
    std::cout<<"ClapTrap "<< this->name <<"take " << amout << " of damage, he has now" << this->health << " health points"<<std::endl;

}
else if(((this->health - amout) <= 0) && (this->health > 0)){
    this->health = this->health - amout;
    std::cout<<"ClapTrap "<< this->name <<"take " << amout << " of damage, now, he's dead"<<std::endl;
}
else
    std::cout<<"ClapTrap "<< this->name <<"is already dead"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amout){

}