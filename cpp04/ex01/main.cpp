#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define NUMBER_OF_ANIMALS 8

int	main( void )
{
	Animal	*animals[NUMBER_OF_ANIMALS];
	Brain	*brain;
	
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

	*(animals[5]) = *(animals[7]);
	std::cout << animals[5]->getBrain()->ideas[2] << std::endl;

	Dog	garfield;
	Dog	*cpy = new Dog(garfield);
	std::cout << cpy->getBrain()->ideas[0] << std::endl;
	std::cout << garfield.getBrain()->ideas[0] << std::endl;
	delete cpy;

	Dog basic;
	{
		Dog tmp = basic;
	}
	Cat basic1;
	{
		Cat tmp2 = basic1;
	}

	
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i];
}
