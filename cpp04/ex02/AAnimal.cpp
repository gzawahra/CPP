#include "AAnimal.hpp"

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal died X(" << std::endl;
	return;
}

const std::string	&AAnimal::getType( void ) const
{
	return (this->type);
}
