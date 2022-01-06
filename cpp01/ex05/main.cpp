#include "Karen.hpp"
#include <iostream>

int	main( int ac, char **av )
{
	Karen karen;

	if(ac != 2)
	{
		std::cout << "wrond number of args use ./karen error/warning/debug/info to diplay messages using info as default" << std::endl << std::endl;
		karen.complain("info");
		return (0);
	}
	else
		karen.complain(av[1]);
	return (0);
}
