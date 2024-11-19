#include "../includes/Weapon.hpp"


Weapon::Weapon(std::string type) : wp_type(type){
}

Weapon::~Weapon(){
}

void Weapon::setType(std::string type){
	this->wp_type = type;
}

std::string Weapon::getType(){
	return this->wp_type;
}