#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>
# include "Contact.class.hpp"

class	PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);
	
	void	add_contact(void);
	void	show_contact(void) const;

private:

	int		_nb_contact;
	Contact	_list_contact[8];

};

#endif