#include "DiamondTrap.hpp"

int	main( void )
{

	DiamondTrap diamondtp("diamondtp");

	diamondtp.attack("cptp");
	diamondtp.takeDamage(6);
	diamondtp.beRepaired(4);
	diamondtp.takeDamage(3);
	diamondtp.guardGate();
	diamondtp.highFivesGuys();
	diamondtp.whoAmI();
	diamondtp.beRepaired(8);
	diamondtp.takeDamage(17);

	std::cout << std::endl;	
	std::cout << " ############################ " << std::endl;		
	std::cout << std::endl;

	ClapTrap claptp("cptp");

	claptp.attack("diamondtp");
	claptp.takeDamage(6);
	claptp.beRepaired(4);
	claptp.takeDamage(3);
	claptp.beRepaired(8);
	claptp.takeDamage(17);
	std::cout << std::endl;
}
