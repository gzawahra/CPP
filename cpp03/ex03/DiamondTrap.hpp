#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{

public:

	DiamondTrap( void );
	~DiamondTrap( void );
	DiamondTrap( const std::string &name );
	DiamondTrap( const DiamondTrap &src );
	DiamondTrap	&operator=( const DiamondTrap &other );

	void	whoAmI( void ) const ;
private:
	std::string	_name;
};

#endif
