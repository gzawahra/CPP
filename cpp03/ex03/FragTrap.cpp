#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string &name )
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_initialHitPoints = this->_hitPoints;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Name constructor for FragTrap called" << std::endl;
	return;
}

FragTrap::FragTrap( void )
{
	this->_name = "";
	this->_hitPoints = 100;
	this->_initialHitPoints = this->_hitPoints;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default constructor for FragTrap called" << std::endl;
	return;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor for FragTrap called" << std::endl;
	return;
}

void		FragTrap::highFivesGuys( void ) const
{
	std::cout << "High five!" << std::endl;
}
