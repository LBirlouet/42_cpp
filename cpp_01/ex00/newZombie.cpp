#include "Zombie.hpp"

Zombie* newZombie(std::string name){
	//sur la heap
	Zombie	*myZombie = new Zombie(name);
	return (myZombie);
}