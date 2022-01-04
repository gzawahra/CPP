#include "PhoneBook.class.hpp"

int main(void)
{
	PhoneBook	AwesomePB;
	std::string	cmd;

	std::cout << "Welcome to my AWESOME PHONEBOOK, the commands available to you are:" << std::endl;
	std::cout << "	-ADD : to add a new contact to phonebook" << std::endl; 
	std::cout << "	-SEARCH : to display contacts" << std::endl;
	std::cout << "	-EXIT : to ... well this is self explanatory" << std::endl;
	while (42)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cout << "yeah sure..take the easy way out." << std::endl;
			return (1);
		}
		if (cmd.compare("EXIT") == 0)
		{
			std::cout << "Peace out." << std::endl;
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