#include <iostream>
#include "Zombie.hpp"

void	announceAllZombies( Zombie *zombieHorde, size_t numberOfZombies)
{
	for (size_t i = 0; i < numberOfZombies; i++)
	{
		zombieHorde[i].announce();
	}
}

int		main( int ac, char **av)
{
	int nz = 0;

	if (ac == 1)
		nz = 5;
	else if(ac == 2)
		nz = stoi(av[1]);
	else
	{
		std::cout << "Wrong number of args" << std::endl;		
		return (0);
	}
	std::cout << "Creating the first Zombie horde of Zombies" << std::endl;
	{
		Zombie	*firstZombieHorde = zombieHorde(nz, "Jack");
		announceAllZombies(firstZombieHorde, nz);
		delete [] firstZombieHorde;
	}
	return (0);
}
