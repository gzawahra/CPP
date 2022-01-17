#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	FragTrap fragtp("fragtp");

	fragtp.attack("Doofus");
	fragtp.takeDamage(6);
	fragtp.beRepaired(4);
	fragtp.takeDamage(3);
	fragtp.highFivesGuys();
	fragtp.beRepaired(8);
	fragtp.takeDamage(17);

	ScavTrap scavtp("scavtp");

	scavtp.attack("Doofus");
	scavtp.takeDamage(6);
	scavtp.beRepaired(4);
	scavtp.takeDamage(3);
	scavtp.guardGate();
	scavtp.beRepaired(8);
	scavtp.takeDamage(17);

	ClapTrap claptp("claptp");

	claptp.attack("Doofus");
	claptp.takeDamage(6);
	claptp.beRepaired(4);
	claptp.takeDamage(3);
	claptp.beRepaired(8);
	claptp.takeDamage(17);
}
