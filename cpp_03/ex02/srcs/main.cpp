#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main(){
    FragTrap player1("Vicente");
    FragTrap player2("Leo");

    player1.attack("Victor");
    player2.attack("Victor");

    player1.beRepaired(20);
    player2.beRepaired(1);

    player1.takeDamage(119);
    player2.takeDamage(99);

    player1.highFivesGuys();
    player2.highFivesGuys();

}