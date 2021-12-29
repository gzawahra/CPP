#ifndef SPAN_HPP
# define SPAN_HPP

# include <cstdlib>
# include <exception>
 
class Span {

public:

	Span();
	Span(unsigned int n);
	Span(Span const & ref);
	virtual ~Span();

	Span &	operator=(Span const & ref);
	unsigned int & operator[](size_t idx) const;

	size_t			size() const;
	void			addNumber(unsigned int n);
	void			addRange(unsigned int n, unsigned int times);
	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;

	class IndexOutOfRangeException : public std::exception {
		public:
			virtual const char*  what() const throw() {
				return ("Span index out of range");
			}
	};

	class NotEnoughElementsException : public std::exception {
		public:
			virtual const char*  what() const throw() {
				return ("Not enough elements in the collection to perform the operation");
			}
	};

private:

	size_t	idx;
	size_t	len;
	unsigned int *	array;

};

#endif
