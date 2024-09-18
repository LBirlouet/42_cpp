#include "Zombie.hpp"

Zombie::Zombie(void){ 
	return ;
}

Zombie::~Zombie(void){
	return ;
}

void	Zombie::announce(void){
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombieName(std::string name){
	this->name = name;
}