#include <iostream>
#include "whatever.hpp"

int	main( void )
{
	int			a, b;
	float		c, d;
	char		e, f;
	std::string g, h;

	a = 1;
	b = 2;
	c = 4.2f;
	d = 42.21f;
	e = 'a';
	f = 'x';
	g = "string1";
	h = "string2";
	std::cout << "a: " << a << " and b: " << b << std::endl;
	std::cout << "c: " << c << " and d: " << d << std::endl;
	std::cout << "e: " << e << " and f: " << f << std::endl;
	std::cout << "g: " << g << " and h: " << h << std::endl;
	std::cout << "swaping" << std::endl;
	::swap(a, b);
	::swap(c, d);
	::swap(e, f);
	::swap(g, h);
	std::cout << "a: " << a << " and b: " << b << std::endl;
	std::cout << "c: " << c << " and d: " << d << std::endl;
	std::cout << "e: " << e << " and f: " << f << std::endl;
	std::cout << "g: " << g << " and h: " << h << std::endl;
	std::cout << "min(a, b): " << ::min(a, b) << std::endl;
	std::cout << "max(a, b): " << ::max(a, b) << std::endl;
	std::cout << "min(c, d): " << ::min(c, d) << std::endl;
	std::cout << "max(c, d): " << ::max(c, d) << std::endl;
	std::cout << "min(e, f): " << ::min(e, f) << std::endl;
	std::cout << "max(e, f): " << ::max(e, f) << std::endl;
	std::cout << "min(g, h): " << ::min(g, h) << std::endl;
	std::cout << "max(g, h): " << ::max(g, h) << std::endl;


}

// class Awesome
// {
// 	public:
// 		Awesome(void) : _n(0) { }
// 		Awesome (int n) : _n(n) {}
// 		Awesome & operator= (Awesome & a) { _n= a._n; return *this; }
// 		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
// 		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
// 		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
// 		bool operator<( Awesome const & rhs ) const { return (this->_n<rhs._n); }
// 		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
// 		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
// 		int get_n() const { return _n; }
// 	private:
// 		int _n;
// };
// std::ostream& operator<<(std::ostream &o, const Awesome &a) { o<<a.get_n(); return o; }

// int main(void)
// {
// 	Awesome a(2), b(4);
// 	swap(a, b);
// 	std::cout << a <<" "<<b<< std::endl;
// 	std::cout << max(a, b) << std::endl;
// 	std::cout << min(a, b) << std::endl;
// 	return(0);
// }
