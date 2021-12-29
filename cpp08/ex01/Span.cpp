#include "Span.hpp"
#include "algorithm"

Span::Span() {
	this->array = new unsigned int[0];
	this->len = 0;
	this->idx = 0;
}

Span::Span(unsigned int n) {
	array = new unsigned int[n]();
	this->len = n;
	this->idx = 0;
}

Span::Span(Span const & ref) {
	*this = ref;
}

Span::~Span() {
	delete[] this->array;
}

Span &	Span::operator=(Span const & ref) {
	this->array = new unsigned int[ref.size()];
	this->len = ref.size();
	for (size_t i = 0; i < this->len; i++) {
		this->array[i] = ref[i];
	}
	return *this;
}

unsigned int & Span::operator[](size_t idx) const {
	if (idx < 0 || idx >= this->len)
		throw Span::IndexOutOfRangeException();
	else
		return this->array[idx];
}

void	Span::addNumber(unsigned int n) {
	if (idx >= len)
		throw Span::IndexOutOfRangeException();
	this->array[idx++] = n;
}

void	Span::addRange(unsigned int n, unsigned int times) {
	for (unsigned int i = 0; i < times; i++) {
		try { this->addNumber(n); }
		catch (std::exception & e) {}
	}
}

size_t	Span::size() const {
	return this->len;
}

unsigned int	Span::shortestSpan() const {
	unsigned int min = this->longestSpan();
	unsigned int range;

	std::sort(this->array, this->array + idx);
	for (unsigned int i = 0; i < len - 1; i++) {
		range = this->array[i+1] - this->array[i];
		min = range < min ? range : min;
	}
	return min;
}

unsigned int	Span::longestSpan() const {
	if (idx < 2)
		throw Span::NotEnoughElementsException();
	unsigned int* min = std::min_element(this->array, this->array + idx);
	unsigned int* max = std::max_element(this->array, this->array + idx);
	return *max - *min;
}
