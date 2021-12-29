#include "Contact.class.hpp"

Contact::Contact(std::string first_name,
				std::string last_name,
				std::string nickname,
				std::string phone_number,
				std::string darkest_secret)
						:	_first_name(first_name), 
							_last_name(last_name),
							_nickname(nickname),
							_phone_number(phone_number),
							_darkest_secret(darkest_secret) {

	return ;
}

Contact::Contact(void) {
	
	return ;
}

Contact::~Contact(void) {
	
	return ;
}


std::string	Contact::trim_to_ten(std::string info) const {

	if (info.compare("first_name") == 0)
		info = this->_first_name;
	if (info.compare("last_name") == 0)
		info = this->_last_name;
	if (info.compare("nickname") == 0)
		info = this->_nickname;
	if (info.length() >= 10)
		info = info.substr(0, 9).append(".");
	return (info);
}

void	Contact::display_contact(void) const {

	std::cout	<< "First name : " << this->_first_name << std::endl
				<< "Last name : " << this->_last_name << std::endl
				<< "Nickname : " << this->_nickname << std::endl
				<< "Phone number : " << this->_phone_number << std::endl
				<< "Darkest secret : " << this->_darkest_secret << std::endl;
}