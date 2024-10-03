#include "Zombie.hpp"

Zombie::Zombie(std::string myName){
	this->myName = myName;
}

Zombie::~Zombie(void){
}

void	Zombie::announce(void){
	std::cout<< this->myName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombieName(std::string name){
	this->myName = name;
}