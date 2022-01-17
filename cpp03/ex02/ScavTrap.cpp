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

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor for scavtrap called" << std::endl;
	return;
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
