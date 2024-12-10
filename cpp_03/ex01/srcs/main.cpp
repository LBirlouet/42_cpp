#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(){
    ScavTrap player1("Cameron");
    ScavTrap player2("Younes");

    player1.attack("Nicolas");
    player2.attack("Nicolas");

    player1.beRepaired(20);
    player2.beRepaired(1);

    player1.takeDamage(119);
    player2.takeDamage(99);

    player1.guardGate();
    player2.guardGate();

}