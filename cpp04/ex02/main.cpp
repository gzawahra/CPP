#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define NUMBER_OF_ANIMALS 8

int	main( void )
{
	/*Animal doesntwork;*/
	AAnimal	*animals[NUMBER_OF_ANIMALS];
	Brain	*brain;

	/* AAnimal *hello = new AAnimal(); */

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i < NUMBER_OF_ANIMALS / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	brain = animals[7]->getBrain();
	brain->ideas[0] = "FOOOD !";
	brain->ideas[1] = "BALLLLLLL !!!";
	brain->ideas[2] = "HUMAN !";
	brain->ideas[3] = "BEE !!!";
	std::cout << animals[7]->getBrain()->ideas[0] << std::endl;

	animals[3]->makeSound();
	animals[6]->makeSound();
	std::cout << "Type: " << animals[2]->getType() << std::endl;

	*(animals[5]) = *(animals[7]);
	std::cout << animals[5]->getBrain()->ideas[2] << std::endl;

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i];
}
