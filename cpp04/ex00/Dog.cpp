#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Dog is born !" << std::endl;
	return;
}

Dog::Dog( Dog const & src )
{
	std::cout << "Dog has been copied" << std::endl;
	*this = src;
	return;
}

Dog::~Dog( void )
{
	std::cout << "Dog died X(" << std::endl;
	return;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouf!" << std::endl;
}
