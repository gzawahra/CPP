#include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << "Cat is born !" << std::endl;
	return;
}

Cat::Cat( Cat const & src )
{
	std::cout << "Cat has been copied !" << std::endl;
	*this = src;
	return;
}

Cat::~Cat( void )
{
	std::cout << "Cat died X(" << std::endl;
	return;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeeeeeow"
		<< std::endl;
}
