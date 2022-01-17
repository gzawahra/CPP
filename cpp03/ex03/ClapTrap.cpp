#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name(""), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	this->_initialHitPoints = this->_hitPoints;
		std::cout << "Default constructor for ClapTrap called" << std::endl;
	return;
}

ClapTrap::ClapTrap( const std::string name ): _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	this->_initialHitPoints = this->_hitPoints;
		std::cout << "Name constructor called" << std::endl;
	return;
}

ClapTrap::~ClapTrap( void )
{
		std::cout << "Destructor for ClapTrap called" << std::endl;
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
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		std::cout << "ClapTrap " << this->_name << " took " << amount
			<< " damage." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " took " << amount
			<< " hit points, " << this->_hitPoints
			<< " hit points left." << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_initialHitPoints)
	{
		this->_hitPoints = this->_initialHitPoints;
		std::cout << "Max health reached !" << std::endl;
	}
	std::cout << "ClapTrap " << this->_name << " was just repaired "
		<< amount << " energy points, now has" << this->_hitPoints
		<< std::endl;
}
