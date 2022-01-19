#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string &name )
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	std::cout << "Name constructor for DiamondTrap called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( void )
{
	std::cout << "Default constructor for DiamondTrap called" << std::endl;
	return;
}
DiamondTrap::DiamondTrap( DiamondTrap const & src )
{
	std::cout << "Copy constructor for DiamondTrap called" << std::endl;
	*this = src;
	return;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Destructor for DiamondTrap called" << std::endl;
	return;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "Assignement operator" << std::endl;
	std::cout << rhs << std::endl;
	return *this;
}

void		DiamondTrap::whoAmI( void ) const
{
	std::cout << "I am " << this->_name << " and my ClapTrap name is "
		<< ClapTrap::_name << " i have hp/ep/ad:   " << this->_hitPoints << " / "
		<< this->_energyPoints << " / " << this->_attackDamage <<std::endl;
}
