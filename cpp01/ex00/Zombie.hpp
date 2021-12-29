#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{

public:

	Zombie( std::string name );
	~Zombie( void );

	void		announce( void ) const;

	std::string	getName( void ) const;

private:

	void		prefix( void ) const;

	std::string name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
