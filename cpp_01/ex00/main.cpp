#include "Zombie.hpp"

/*
	Stack -> better for fix and small data | short time | simple memory

	Healp -> big data | long time | manual memory
*/
int	main(void){
	Zombie *myZombie = newZombie("Heaper");
	myZombie->announce();
	randomChump("Stacker");
}