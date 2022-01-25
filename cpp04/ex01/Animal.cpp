#include "Animal.hpp"

Animal::Animal( void ): type("")
{
	std::cout << "Animal is born !" << std::endl;
	return;
}

Animal::Animal( Animal const & src )
{
	std::cout << "Animal is born !" << std::endl;
	*this = src;
	return;
}

Animal::~Animal( void )
{
	std::cout << "Animal died !" << std::endl;
	return;
}

Animal &	Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal has been assigned !" << std::endl;
	this->type = rhs.getType();
	return *this;
}

void	Animal::makeSound( void ) const
{
	std::cout << "random animal sounds ...."
		<< std::endl;
}

const std::string	&Animal::getType( void ) const
{
	return (this->type);
}

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance )
{
	ostream << instance.getType();;
	return ostream;
}
