#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "iostream"
#include "string"


class Zombie
{

public:

	Zombie(void);
	Zombie(std::string myName);
	~Zombie(void);

	void	announce( void );
	void	setZombieName(std::string name);

private:

	std::string myName;

};

Zombie* zombieHorde( int N, std::string name);

#endif
