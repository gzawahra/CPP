#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

public:

	ClapTrap( const std::string name );
	~ClapTrap( void );

	void		attack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

	const std::string	&getName( void ) const ;

private:

	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_initialEnergyPoints;
	int			_attackDamage;

	ClapTrap( void );

};

#endif
