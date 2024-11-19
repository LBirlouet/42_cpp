#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include "iostream"

class HumanB
{

public:

	HumanB(std::string name);
	~HumanB(void);

	void    setWeapon(Weapon &weapon);

    void    attack(void);

private:

	std::string human_name;
    Weapon *his_weapon;

};


#endif