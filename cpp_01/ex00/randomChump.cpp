#include "Zombie.hpp"

void randomChump(std::string name){
	// sur la stack
	Zombie myZombie(name);
	myZombie.announce();
}