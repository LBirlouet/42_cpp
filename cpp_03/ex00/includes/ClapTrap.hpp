#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "iostream"

class ClapTrap
{

public:

    ClapTrap(std::string Name);
	~ClapTrap();

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

protected: //POUR QUE L'AUTRE PUISSE Y ACCEDER

    std::string name;
    int health;
    unsigned int energyPoint;
    unsigned int attackDamage;

};

#endif