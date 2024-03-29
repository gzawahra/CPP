#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name(""), _grade(Bureaucrat::lowestGrade)
{

	std::cout << "Default constructor for Bureaucrat called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( const std::string &name, int grade ): _name(name),
	_grade(grade)
{
	checkGrade();

	std::cout << "Standard constructor for Bureaucrat called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{

	std::cout << "Copy constructor for Bureaucrat called" << std::endl;
	*this = src;
	return;
}

Bureaucrat::~Bureaucrat( void )
{

	std::cout << "Destructor for Bureaucrat called" << std::endl;
	return;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	this->_grade = rhs._grade;
	std::cout << "Name is const and can't be overwritten, only grade was copied"
		<< std::endl;

	std::cout << "Assignement operator for Bureaucrat called" << std::endl;
	return *this;
}

const std::string	&Bureaucrat::getName( void ) const
{
	return this->_name;
}

int	Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void	Bureaucrat::incrGrade( int quantity )
{
	std::cout << "incrementGrade from Bureaucrat called with value "
		<< quantity << std::endl;
	this->_grade -= quantity;
	checkGrade();
}
void	Bureaucrat::incrGrade( void )
{
	std::cout << "incrementGrade from Bureaucrat called with value 1."
		<< std::endl;
	this->_grade--;
	checkGrade();
}
void	Bureaucrat::decrGrade( int quantity )
{
	std::cout << "decrementGrade from Bureaucrat called with value "
		<< quantity << std::endl;
	this->_grade += quantity;
	checkGrade();
}
void	Bureaucrat::decrGrade( void )
{
	std::cout << "decrementGrade from Bureaucrat called with value 1."
		<< std::endl;
	this->_grade++;
	checkGrade();
}
void	Bureaucrat::checkGrade( void ) const
{
	if (this->_grade < Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & instance)
{
	ostr << instance.getName() << ", Bureaucrat grade " << instance.getGrade();
	return ostr;
}

bool	Bureaucrat::verbose = false;
