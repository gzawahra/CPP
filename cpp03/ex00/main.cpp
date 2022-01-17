#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap claptp("claptp");

	claptp.attack("Doofus");
	claptp.takeDamage(6);
	claptp.beRepaired(4);
	claptp.takeDamage(3);
	claptp.beRepaired(8);
	claptp.takeDamage(17);
}
