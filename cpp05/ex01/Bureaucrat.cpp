#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade)
: _name(name)
{
	try
	{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		_grade = grade;
	}
	catch (GradeTooHighException &e)
	{
		std::cout << "Can't create Bureaucrat, grade is too high" << std::endl;
		throw GradeTooHighException();
	}
	catch (GradeTooLowException &e)
	{
		std::cout << "Can't create Bureaucrat, grade is too low" << std::endl;
		throw GradeTooLowException();
	}
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
: _name(src._name)
{
	_grade = src._grade;
}

Bureaucrat
	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	_grade = rhs._grade;
	return (*this);
}

std::string const
	Bureaucrat::getName(void) const
{
	return (_name);
}

unsigned int
	Bureaucrat::getGrade(void) const
{
	return (_grade);
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
void
	Bureaucrat::signForm(Form &f) const
{
	if (_grade <= f.getGradeToSign())
		std::cout << _name << " signs " << f.getName() << std::endl;
	else
		std::cout << _name << " can't sign because grade " << _grade << " < " << f.getGradeToSign() << std::endl;
}

const char
	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char
	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream
	&operator<<(std::ostream &o, const Bureaucrat &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}
