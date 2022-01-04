#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void ): name("")
{
}

Zombie::~Zombie( void )
{
	Zombie::prefix();
	std::cout << "*Gets shot*" << std::endl;
}

void	Zombie::announce( void ) const
{
	Zombie::prefix();
	std::cout << "Braaaaaiiiiiiinnnnssss......." << std::endl;
}

void	Zombie::prefix( void ) const
{
	std::cout << "<" << this->name << "> ";
}

std::string	Zombie::getName( void ) const
{
	return (this->name);
}

bool	Zombie::setName( std::string newName )
{
	if (newName == "")
		return (false);
	this->name = newName;
	return (true);
}
