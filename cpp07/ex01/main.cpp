#include <iostream>
#include <cstdlib>
#include "iter.hpp"

template<typename T>
void	display( T &whatever )
{
	std::cout << "Variable's value is: " << whatever << std::endl;
}

void	setRandomValue( int &number )
{
	number = std::rand() % 100;
}

int	main( void )
{
	std::string	strTable[3];
	int			*intTable = new int[5];

	strTable[0] = "WAZZZAAA?";
	strTable[1] = "WAZZZZZAAA";
	strTable[2] = "W....AAAZZZAAA";
	::iter(strTable, 3, &display);
	for (int i = 0; i < 5; i ++)
		setRandomValue(intTable[i]);
	::iter(intTable, 5, &display);
}

/////////////////////////////////////////////////////////////////////////////////

// class Awesome
// {
// 	public:
// 		Awesome (void) : _n( 42 ) { return; }
// 		int get(void) const { return this->_n; }
// 	private:
// 		int _n;
// };
// std::ostream& operator<<( std::ostream & o, Awesome const & rhs) {o<< rhs.get(); return o; }

// template< typename T >
// void print( T const &x) { std::cout<<x<< std::endl; return; }

// int main() {
// 	int tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
// 	return 0;
// }