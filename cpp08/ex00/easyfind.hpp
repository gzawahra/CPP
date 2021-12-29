#ifndef _EASYFIND_HPP
# define _EASYFIND_HPP

#include <exception>
#include <iostream>

class OccurenceNotFoundException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Not found any occurences on the container");
		}
};

template<typename T>
void		easyfind(T container, int n) {
	typename T::iterator		it = container.begin();
	typename T::const_iterator	ite = container.end();

	for (; it != ite; ++it) {
		if (*it == n) {
			std::cout << "occurence found" << std::endl;
			return ;
		}
	}
	throw (OccurenceNotFoundException());
}

#endif
