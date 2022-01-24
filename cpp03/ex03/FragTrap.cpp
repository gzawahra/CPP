#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string &name )
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_S_hitPoints = this->_hitPoints;
	this->_S_energyPoints = this->_energyPoints;
	this->_S_attackDamage = this->_attackDamage;
	std::cout << "Name constructor for FragTrap called" << std::endl;
	return;
}

FragTrap::FragTrap( void )
{
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_S_hitPoints = this->_hitPoints;
	this->_S_energyPoints = this->_energyPoints;
	this->_S_attackDamage = this->_attackDamage;
	std::cout << "Default constructor for FragTrap called" << std::endl;
	return;
}
FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "Copy constructor for FragTrap called" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor for FragTrap called" << std::endl;
	return;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "Assignement operator called for FragTrap" << std::endl;
	std::cout << rhs << std::endl;
	return *this;
}

void		FragTrap::highFivesGuys( void )
{
	std::cout << "High five!" << std::endl;
}
