#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) : _nb_contact(0) {
	
	return ;
}

PhoneBook::~PhoneBook(void) {
	
	return ;
}

void	PhoneBook::add_contact(void) {

	if (this->_nb_contact == 8)
	{
		std::cout << "Can't put more than eight contact." << std::endl;
		return ;
	}

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Please enter contact informations: " << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin ,first_name);
	std::cout << "Last name: ";
	std::getline(std::cin ,last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin ,nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin ,phone_number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin ,darkest_secret);
	if (first_name.empty() && last_name.empty() && nickname.empty())
		std::cout << "Can't create a contact without some kind of name."<< std::endl;
	else
	{
		std::cout << "Contact successfully created !" << std::endl;
		Contact		new_contact(first_name,
								last_name,
								nickname,
								phone_number,
								darkest_secret);
		_list_contact[this->_nb_contact] = new_contact;
		this->_nb_contact++;
	}
	std::cout << std::endl;
}

void	PhoneBook::show_contact(void) const {


	if (this->_nb_contact == 0)
	{
		std::cout << "U have no friend actually, add some before searching for them." << std::endl;
		return ;
	}
	for (int i = 0; i < this->_nb_contact; i++)
	{
		std::cout << std::setfill(' ') << std::setw(10) << i + 1;
		std::cout << "| ";
		std::cout << std::setfill(' ') << std::setw(10) << this->_list_contact[i].trim_to_ten("first_name");
		std::cout << "| ";
		std::cout << std::setfill(' ') << std::setw(10) << this->_list_contact[i].trim_to_ten("last_name");
		std::cout << "| ";
		std::cout << std::setfill(' ') << std::setw(10) << this->_list_contact[i].trim_to_ten("nickname");
		std::cout << "| ";
		std::cout << std::endl;
	}

	int			index;
	std::string	number;

	std::cout << "Which one do you want to see precisely ? ";
	while (42) {

		std::getline(std::cin, number);
		index = atoi(number.c_str());
		if (std::cin.eof())
			return ;
		if (index > 0 && index <= this->_nb_contact)
			break ;
		std::cout << "Not a valid index, try again." << std::endl;
		std::cout << "Enter a valid index : ";
 	}
	this->_list_contact[index - 1].display_contact();
	std::cout << std::endl;
}