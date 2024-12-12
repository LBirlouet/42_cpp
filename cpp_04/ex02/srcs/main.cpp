#include "../includes/Animal.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"
#include "iostream"

int	main()
{
    // Animal *random = new Animal(); //can not compil because it's a abstract class

    Animal *dog = new Dog();
    Animal *cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;
}