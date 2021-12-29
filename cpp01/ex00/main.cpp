#include <iostream>
#include "Zombie.hpp"

int	main( void )
{
	std::cout << "Creating the first Zombie, Jack, \"manually\"" << std::endl;
	{
		Zombie	robert("Robert");
		robert.announce();
	}
	std::cout << "Creating the second Zombie, Mathieu, using the function"
		" newZombie"<< std::endl;
	{
		Zombie	*georges = newZombie("Mathieu");
		georges->announce();

		delete georges;
	}
	{
		std::cout << "Creating the third Zombie, Sophie, using the function"
			" randomChump"<< std::endl;
		randomChump("Sophie");
	}
}
