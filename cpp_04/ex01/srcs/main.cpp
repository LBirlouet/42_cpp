#include "../includes/Animal.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"
#include "iostream"

int	main()
{
    Animal *animals[6];

    for (int i = 0; i < 3; i++) {
        animals[i] = new Dog();
    }
    for (int i = 3; i < 6; i++) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < 6; i++) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < 6; i++) {
        delete animals[i];
    }
}