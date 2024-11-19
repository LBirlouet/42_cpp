#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : human_name(name), his_weapon(NULL){
}

HumanB::~HumanB(){
}

void HumanB::attack(void){
	if (his_weapon)
		std::cout << this->human_name << " attacks with their " << this->his_weapon->getType() << std::endl;
	else
		std::cout << this->human_name << " attacks" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon){
	this->his_weapon = &weapon;
}