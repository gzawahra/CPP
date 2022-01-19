#include "ScavTrap.hpp"


ScavTrap::ScavTrap( const std::string name )
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_initialHitPoints = this->_hitPoints;
	std::cout << "Name constructor for ScavTrap called" << std::endl;
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor for scavtrap called" << std::endl;
	return;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "Assignement operator called" << std::endl;
	std::cout << rhs << std::endl;
	return *this;
}

void		ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " activated Gate Keeper !" << std::endl;
}

void		ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap " << this->_name << " attacked " << target
		<< " causing " << this->_attackDamage << " points of damage!" << std::endl;
}
