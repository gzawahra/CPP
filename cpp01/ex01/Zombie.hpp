#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{

public:

	Zombie( void );
	~Zombie( void );

	void		announce( void ) const;

	std::string	getName( void ) const;
	bool		setName( std::string newName );

private:

	void		prefix( void ) const;

	std::string name;
};

Zombie	*zombieHorde( int numberOfZombies, std::string name );

#endif
