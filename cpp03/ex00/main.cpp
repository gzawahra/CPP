#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap claptp("claptp");

	claptp.attack("Doofus");
	claptp.takeDamage(6);
	claptp.beRepaired(1);
	claptp.beRepaired(1);
	claptp.beRepaired(1);
	claptp.beRepaired(1);
	claptp.takeDamage(-1);
	claptp.beRepaired(8);
	claptp.takeDamage(17);
}
