#include "Zombie.hpp"

int	main(void){
	Zombie *myZombie = newZombie("Heaper");
	myZombie->announce();
	randomChump("Stacker");
}