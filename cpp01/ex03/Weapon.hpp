#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{

public:

	Weapon( std::string type );
	~Weapon( void );

	const std::string&	getType( void ) const;
	bool				setType( const std::string& newType );

private:

	std::string type;

};

#endif
