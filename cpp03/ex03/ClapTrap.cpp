#include "ClapTrap.hpp"

ClapTrap::ClapTrap ( void )
{
	std::cout << "Default constructor for FragTrap called" << std::endl;
	return;
}

ClapTrap::ClapTrap( const std::string name ): _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	this->_initialHitPoints = this->_energyPoints;
		std::cout << "Name constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
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

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Assignement operator called" << std::endl;
	std::cout << rhs << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & ostr, ClapTrap const & instance)
{
	ostr << "ClapTrap " << instance.getName();
	return ostr;
}

void		ClapTrap::attack( std::string const & target )
{
	if(_energyPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacked " << target
			<< " causing " << this->_attackDamage << " points of damage! it now has "
			<< this->_energyPoints << " EnergyPoints left." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name 
			<< " can't attack it has 0 energy points "
			<< std::endl;	
	}
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	if(amount > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;

	std::cout << "ClapTrap " << this->_name << " took damage of " 
		<< amount << " hitPoints, " << this->_hitPoints 
		<< " hitPoints left." << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	if(_energyPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " was just repaired "
			<< amount << " hitpoints, now has " << this->_hitPoints
			<< " HitPoints and " << this->_energyPoints << " energypoints."
			<< std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name 
			<< " can't be repaired it has 0 energy points "
			<< std::endl;			
	}
	

}