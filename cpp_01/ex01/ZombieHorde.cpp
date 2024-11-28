#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name){
    if (N <= 0)
        return NULL;
    
    Zombie *myhorde = new Zombie[N];

    for (int i = 0; i < N; i++)
        myhorde[i].setZombieName(name);

    return myhorde;
}