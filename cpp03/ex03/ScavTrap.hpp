#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

public:

	ScavTrap( const std::string name );
	~ScavTrap( void );

	void	attack( const std::string &target ) const ;
	void	guardGate( void ) const ;

protected:

	ScavTrap( void );

};

#endif
