#include <iostream>
#include <list>
#include "Mutantstack.hpp"
#include "Mutantstack.cpp"

int main() {
	{
		Mutantstack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "push 5" << std::endl;
		std::cout << "push 17" << std::endl;

		std::cout << "top is " << mstack.top() << std::endl;

		std::cout << "pop" << std::endl;

		mstack.pop();

		std::cout << "size is " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(42);
		mstack.push(0);

		std::cout << "push 3" << std::endl;
		std::cout << "push 5" << std::endl;
		std::cout << "push 737" << std::endl;
		std::cout << "push 42" << std::endl;
		std::cout << "push 0" << std::endl;

		Mutantstack<int>::iterator it = mstack.begin();
		Mutantstack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << std::endl << "traversing stack with iterators:" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	{
		Mutantstack<char>	hola;

		hola.push(35);
		hola.push(75);
		hola.push(120);
		hola.push(53);

		Mutantstack<char>::iterator		it = hola.begin();
		Mutantstack<char>::iterator		ite = hola.end();

		for (; it != ite ; ++it) {
			std::cout << *it << std::endl;
		}

		return 0;
	}
}
