#include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat is born !" << std::endl;
	return;
}

Cat::Cat( Cat const & src ) : brain(NULL)
{
	std::cout << "Cat has been copied !" << std::endl;
	*this = src;
	return;
}

Cat::~Cat( void )
{
	delete this->brain;
	std::cout << "Cat died X(" << std::endl;
	return;
}

Cat		&Cat::operator=( Cat const &rhs )
{
	std::cout << "Cat has been assigned !" << std::endl;
	if (this->brain)
        delete (this->brain);
	this->brain = new Brain();
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}

Animal	&Cat::operator=( Animal const &rhs )
{
	std::cout << "Animal Cat has been assigned !" << std::endl;
	if (this->brain)
        delete (this->brain);
	this->brain = new Brain();
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeeeeeow" << std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->brain);
}
