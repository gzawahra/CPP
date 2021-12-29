#include "Weapon.hpp"

class HumanB
{

public:

	HumanB( std::string name );
	~HumanB( void );

	void	attack( void ) const;

	Weapon&	getWeapon( void ) const;
	bool	setWeapon( Weapon& newWeapon );

private:

	std::string	name;
	Weapon		*weapon;

};
