#include <iostream>
#include "Span.hpp"

int main() {

	Span sp = Span(5);

	sp.addNumber(5);

	try { std::cout << sp.longestSpan() << std::endl; }
	catch (std::exception & e) { std::cout << e.what() << std::endl; }

	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	try { sp.addNumber(42); }
	catch (std::exception & e) { std::cout << e.what() << std::endl; }

	std::cout << "```````````" << std::endl;

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "```````````" << std::endl;

	Span biggie = Span(10001);

	for (unsigned int i = 0; i < 10001; i++) {
		biggie.addNumber(i);
	}

	std::cout << biggie.shortestSpan() << std::endl;
	std::cout << biggie.longestSpan() << std::endl;

	std::cout << "```````````" << std::endl;

	Span	notsooriginal = Span(7);

	notsooriginal.addRange(42, 7);

	for (int i = 0; i < 7; i++) {
		std::cout << notsooriginal[i] << std::endl;
	}

	return 0;
}
