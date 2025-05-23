#include "../includes/Harl.hpp"

Harl::Harl(){
    fonctions[0] = &Harl::debug;
    fonctions[1] = &Harl::info;
    fonctions[2] = &Harl::warning;
    fonctions[3] = &Harl::error;
}

Harl::~Harl(){
}

void Harl::complain(std::string level){
    if (level.empty()){
        std::cout<<"Error, bad argument"<<std::endl;
        return ;
    }

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++){
        if(level == levels[i]){
            (this->*fonctions[i])();
            return ;
        }
    }
    std::cout<<"Error, no matching"<<std::endl;
    return ;
}

void Harl::debug(){
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"<<std::endl;
}

void Harl::info(){
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger ! If you did, I wouldn't be asking for more !"<<std::endl;
}

void Harl::warning(){
	std::cout<<"I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error(){
	std::cout<<"This is unacceptable ! I want to speak to the manager now."<<std::endl;
}