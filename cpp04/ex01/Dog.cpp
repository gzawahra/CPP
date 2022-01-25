#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog is born !" << std::endl;
	return;
}

Dog::Dog( Dog const & src )
{
	std::cout << "Dog has been copied !" << std::endl;
	*this = src;
	return;
}

Dog::~Dog( void )
{
	delete this->brain;
	std::cout << "Dog died X(" << std::endl;
	return;
}

Dog		&Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog has been assigned !" << std::endl;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}

Animal	&Dog::operator=( Animal const &rhs )
{
	std::cout << "Animal Dog has been assigned !" << std::endl;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouf!" << std::endl;
}

Brain	*Dog::getBrain( void ) const
{
	return (this->brain);
}
