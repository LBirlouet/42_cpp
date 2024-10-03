#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "iostream"
#include "string"


class Zombie
{

public:

	Zombie(std::string myName);
	~Zombie(void);

	void	announce( void );
	void	setZombieName(std::string name);

private:

	std::string myName;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
