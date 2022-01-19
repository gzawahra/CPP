#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:

	FragTrap( void );
	~FragTrap( void );
	FragTrap( const std::string &name );
	FragTrap( const FragTrap &src );
	FragTrap	&operator=( const FragTrap &other );
	
	void		highFivesGuys( void );

private:

};

#endif
