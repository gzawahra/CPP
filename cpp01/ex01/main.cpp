#include <iostream>
#include "Zombie.hpp"

void	announceAllZombies( Zombie *zombieHorde, size_t numberOfZombies)
{
	for (size_t i = 0; i < numberOfZombies; i++)
	{
		zombieHorde[i].announce();
	}
}

int		main(void)
{
	std::cout << "Creating the first Zombie horde of Zombies" << std::endl;
	{
		Zombie	*firstZombieHorde = zombieHorde(10, "Jack");
		announceAllZombies(firstZombieHorde, 10);
		delete [] firstZombieHorde;
	}
	return (0);
}
