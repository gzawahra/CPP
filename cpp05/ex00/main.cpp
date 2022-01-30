#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

int
	main(void)
{
	Bureaucrat	bureaucrat1("Thomas", 0);
	Bureaucrat	bureaucrat2("Antoine", 149);

	std::cout << bureaucrat1 << std::endl;
	bureaucrat1.incrementGrade(1);
	std::cout << bureaucrat1 << std::endl;
	//Error
	bureaucrat1.incrementGrade(1);
	std::cout << bureaucrat1 << std::endl;

	std::cout << bureaucrat2 << std::endl;
	//Error
	bureaucrat2.decrementGrade(1);
	std::cout << bureaucrat2 << std::endl;
	
	//Error
	//Bureaucrat	bureaucrat3("Jean", 0);

	//Error
	//Bureaucrat	bureaucrat4("Henri", 151);
	return (0);
}
