#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "iostream"

class ClapTrap
{

public:

    ClapTrap(std::string Name);
	virtual ~ClapTrap();

    virtual void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

protected:

    std::string name;
    int health;
    unsigned int energyPoint;
    unsigned int attackDamage;

};

#endif