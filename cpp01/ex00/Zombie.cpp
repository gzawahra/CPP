#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ): name(name)
{
}

Zombie::~Zombie( void )
{
	Zombie::prefix();
	std::cout << "*Sounds of dying again*" << std::endl;
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
