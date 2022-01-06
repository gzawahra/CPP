#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB( std::string name ): name(name), weapon(NULL)
{
}

HumanB::~HumanB( void )
{
}

void	HumanB::attack( void ) const
{
	if (this->weapon)
	{
		std::cout << this->name << " attacks with their " << this->weapon->getType()
			<< std::endl;
	}
	else
	{
		std::cout << this->name
			<< " can't attack because they don't have a weapon" << std::endl;
	}
}

Weapon&	HumanB::getWeapon( void ) const
{
	return (*(this->weapon));
}

bool	HumanB::setWeapon( Weapon& newWeapon )
{
	if (newWeapon.getType() == "")
	{
		std::cerr << "New weapon can't be nothing" << std::endl;
		return (false);
	}
	this->weapon = &newWeapon;
	return (true);
}
