#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include "iostream"

class HumanA
{

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void	setWeapon(Weapon &weapon);

    void    attack(void);

private:

	std::string human_name;
    Weapon &his_weapon;

};

#endif