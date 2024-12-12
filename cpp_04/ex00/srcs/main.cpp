#include "../includes/Animal.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"
#include "iostream"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	std::cout << "\n******************************\n" << std ::endl;

	const WrongAnimal	*k = new WrongAnimal();
	const WrongCat		*l = new WrongCat();
	const WrongAnimal	*m = new WrongCat();

	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	std::cout << m->getType() << " " << std::endl;

	k->makeSound();
	l->makeSound();
	m->makeSound();

	delete k;
	delete l;
	delete m;
}