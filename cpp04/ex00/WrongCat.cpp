#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << "WrongCat is born !" << std::endl;
	return;
}

WrongCat::WrongCat( WrongCat const & src )
{
	std::cout << "WrongCat has been copied" << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat died X(" << std::endl;
	return;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meeeeeeeowof"
		<< std::endl;
}
