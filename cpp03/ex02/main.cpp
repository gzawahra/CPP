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

	std::cout << std::endl;	
	std::cout << " ############################ " << std::endl;		
	std::cout << std::endl;

	ScavTrap scavtp("scavtp");

	scavtp.attack("Doofus");
	scavtp.takeDamage(6);
	scavtp.beRepaired(4);
	scavtp.takeDamage(3);
	scavtp.guardGate();
	scavtp.beRepaired(8);
	scavtp.takeDamage(17);
}
