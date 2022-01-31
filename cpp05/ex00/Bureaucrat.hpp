#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat
{

public:

	Bureaucrat( const std::string &name, int grade );
	Bureaucrat( const Bureaucrat &src );
	~Bureaucrat( void );

	Bureaucrat	&operator=( const Bureaucrat &rhs );

	const std::string	&getName( void ) const;
	int					getGrade( void ) const;
	void	incrGrade( void );
	void	decrGrade( void );
	void	incrGrade( int quantity );
	void	decrGrade( int quantity );

	static bool	verbose;

private:

	const std::string	_name;
	int					_grade;

	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;

	Bureaucrat( void );
	void	checkGrade( void ) const ;

public:

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The grade too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The grade too low");
		}
	};

};

std::ostream	&operator<<( std::ostream &ostr, const Bureaucrat &instance );

#endif
