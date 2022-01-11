#include "Fixed.hpp"

Fixed::Fixed( void ): _fixed_point_value(0)
{
	if (Fixed::_verbose)
		std::cout << "constructor" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src )
{
	if (Fixed::_verbose)
		std::cout << "Overload" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed( void )
{
	if (Fixed::_verbose)
		std::cout << "Destructor" << std::endl;
	return;
}

// Assignement operator overload
Fixed &	Fixed::operator=( Fixed const & rhs )
{
	if (Fixed::_verbose)
		std::cout << "Assignement" << std::endl;
	if (this != &rhs)
		this->_fixed_point_value = rhs._fixed_point_value;
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	if (Fixed::_verbose)
		std::cout << "getRawBits" << std::endl;
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits( const int raw )
{
	if (Fixed::_verbose)
		std::cout << "setRawBits" << std::endl;
	this->_fixed_point_value = raw;
}

void	Fixed::setVerbose( bool value )
{
	Fixed::_verbose = value;
}

bool	Fixed::getVerbose( void )
{
	return (Fixed::_verbose);
}

bool	Fixed::_verbose = false;
