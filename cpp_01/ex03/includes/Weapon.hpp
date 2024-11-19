#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "iostream"

class Weapon
{

public:

	Weapon(std::string wp_type);
	~Weapon(void);

	void	setType(std::string wp_type);

    std::string getType();

private:

	std::string wp_type;

};

#endif