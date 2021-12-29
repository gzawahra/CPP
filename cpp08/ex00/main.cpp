#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

void	displayInt(int i) {
	std::cout << i << std::endl;
}

int main() {

	std::list<int>	lst;

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);

	try { easyfind(lst, 3); }
	catch (std::exception & e) { std::cout << e.what() << std::endl; }

	std::vector<int>	vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	
	try { easyfind(vec, 32); }
	catch (std::exception & e) { std::cout << e.what() << std::endl; }

	return 0;
}
