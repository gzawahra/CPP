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

protected:
	unsigned int	_S_hitPoints;
	unsigned int	_S_energyPoints;
	unsigned int	_S_attackDamage;
};

#endif
