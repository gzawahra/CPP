#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain is created !" << std::endl;
	return;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Brain has been copied !" << std::endl;
	*this = src;
	return;
}

Brain::~Brain( void )
{
	std::cout << "Brain died X(" << std::endl;
	return;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	std::cout << "Brain has been asssigned" << std::endl;
	for (int i = 0; i < Brain::numberOfIdeas; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}
