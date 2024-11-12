#include "Zombie.hpp"

int	main(){
    int N = 7;
	Zombie *myhorde = zombieHorde(N, "Claude");
    if (!myhorde)
       return 0;
 
    for (int i = 0; i < N; i++)
        myhorde[i].announce();
    delete[] myhorde;
}