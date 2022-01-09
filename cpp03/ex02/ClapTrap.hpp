#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

public:

	ClapTrap( const std::string name );
	ClapTrap( const ClapTrap &src );
	~ClapTrap( void );

	ClapTrap	&operator=( const ClapTrap &other );

	void		attack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

	const std::string	&getName( void ) const ;

protected:

	ClapTrap( void );

	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_initialHitPoints;
	int			_attackDamage;

};

std::ostream	&operator<<( std::ostream &ostream, const ClapTrap &myClass );

#endif
