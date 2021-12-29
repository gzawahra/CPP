#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque> 

template <typename T>
class Mutantstack : public std::stack<T> {

public:
	
	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin();
	iterator end();
};

#endif
