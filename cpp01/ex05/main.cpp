#include "Karen.hpp"
#include <iostream>

int	main( int ac, char **av )
{
	Karen karen;

	if(ac != 2)
	{
		std::cout << "wrond number of args use ./karen error/warning/debug/info to diplay messages, demo :" << std::endl << std::endl;
		karen.complain("debug");
		std::cout << std::endl;
		std::cout << std::endl;
		karen.complain("info");
		std::cout << std::endl;
		std::cout << std::endl;
		karen.complain("warning");
		std::cout << std::endl;
		std::cout << std::endl;
		karen.complain("error");
		std::cout << std::endl;
		return (0);
	}
	else
		karen.complain(av[1]);
	return (0);
}
