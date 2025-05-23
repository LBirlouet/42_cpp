#include "../includes/ClapTrap.hpp"

int main(){
    ClapTrap player("Nicolas");
    ClapTrap player2("Victor");

    player.attack("Charlie");
    player.beRepaired(15);
    player.takeDamage(24);
    player.beRepaired(2);
    player.takeDamage(4);
    player.beRepaired(10);
    player.attack("Charlie");

    std::cout << "*****************************************" << std::endl;
    

    for (int i = 0; i < 10; i++){
        player2.attack("Julien");
    }
    player2.attack("Julien");
    player2.beRepaired(5);
}