#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>
#include <iostream>

class	Contact {

	public:

		Contact(void);
		Contact(std::string first_name,
				std::string last_name,
				std::string nickname,
				std::string phone_number,
				std::string darkest_secret);
		~Contact(void);

		void		display_contact(void) const;
		std::string	trim_to_ten(std::string info) const;

	private:

		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string	_phone_number;
		std::string _darkest_secret;
};

#endif