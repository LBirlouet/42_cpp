#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : human_name(name), his_weapon(weapon){
}

HumanA::~HumanA(){
}

void HumanA::attack(void){
	std::cout << this->human_name << " attacks with their " << this->his_weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon& weapon){
	this->his_weapon = weapon;
}