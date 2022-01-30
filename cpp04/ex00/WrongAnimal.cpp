#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type("")
{
	std::cout << "WrongAnimal is born !" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "WrongAnimal has been copied !" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal died X(" << std::endl;
	return;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "WrongAnimal has been assigned !" << std::endl;
	this->type = rhs.getType();
	return *this;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Wrong random animal sounds ...."
		<< std::endl;
}

const std::string	&WrongAnimal::getType( void ) const
{
	return (this->type);
}

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &instance )
{
	ostream << instance.getType();;
	return ostream;
}
