#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main(){
    FragTrap player1("Vicente");
    ScavTrap player2("Leo");
    ClapTrap player3("Rachel");

    player1.attack("Victor");
    player2.attack("Victor");
    player3.attack("Victor");

    player1.beRepaired(20);
    player2.beRepaired(1);
    player3.beRepaired(100);

    player1.takeDamage(119);
    player2.takeDamage(99);
    player3.takeDamage(200);

    player1.highFivesGuys();
    player2.guardGate();

}