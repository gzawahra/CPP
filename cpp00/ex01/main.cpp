#include "PhoneBook.class.hpp"

int main(void)
{
	PhoneBook	AwesomePB;
	std::string	cmd;

	std::cout << "Welcome to my AWESOME PHONEBOOK, u can use multiple command which are:" << std::endl;
	std::cout << "	-ADD : to add a new AWESOME contact to my AWESOME PHONEBOOK" << std::endl; 
	std::cout << "	-SEARCH : to search and get info from a previously added AWESOME contact" << std::endl;
	std::cout << "	-EXIT : to exit my AWESOME PHONEBOOK (already miss u <3)" << std::endl;
	while (42)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cout << "U can exit this way too." << std::endl;
			return (1);
		}
		if (cmd.compare("EXIT") == 0)
		{
			std::cout << "I'm out, see ya." << std::endl;
			return (0);
		}
		if (cmd.compare("ADD") == 0)
			AwesomePB.add_contact();
		else if (cmd.compare("SEARCH") == 0)
			AwesomePB.show_contact();
		else
			std::cout << "Not a valid command, try ADD, SEARCH or EXIT." << std::endl;
	}
	return (0);
}