#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string name ): _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	this->_initialEnergyPoints = this->_energyPoints;
		std::cout << "Name constructor called" << std::endl;
	return;
}

ClapTrap::~ClapTrap( void )
{
		std::cout << "Destructor called" << std::endl;
	return;
}

const std::string	&ClapTrap::getName( void ) const
{
	return this->_name;
}

void		ClapTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap " << this->_name << " attacked " << target
		<< " causing " << this->_attackDamage << " points of damage!"
		<< std::endl;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	this->_energyPoints -= amount;
	if (this->_energyPoints < 0)
		std::cout << "ClapTrap " << this->_name << " took " << amount
			<< " damage." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " took " << amount
			<< " hit points, " << this->_energyPoints
			<< " energy points left." << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	this->_energyPoints += amount;
	if (this->_energyPoints > this->_initialEnergyPoints)
	{
		this->_energyPoints = this->_initialEnergyPoints;
		std::cout << "Max health reached !" << std::endl;
	}
	std::cout << "ClapTrap " << this->_name << " was just repaired "
		<< amount << " energy points, now has " << this->_energyPoints
		<< std::endl;
}
