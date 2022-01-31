#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
: Form("RobotomyRequestForm", 72, 45, target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
: Form(src)
{
}

RobotomyRequestForm
	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

void
	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int	random_number;

	try
	{
		if (!getIsSigned())
			throw FormNotSignedException();
		else if (executor.getGrade() > getGradeToExec())
			throw GradeTooLowException();
		std::cout << "*Drilling noise*" << std::endl;
		std::srand(std::time(0));
		random_number = std::rand() % 2;
		if (random_number == 1)
			std::cout << "Robotomy failed" << std::endl;
		else
			std::cout << "Robotomy successful" << std::endl;
	}
	catch (FormNotSignedException &e)
	{
		std::cout << "Can't execute form, it's not signed" << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << "Can't execute form, grade is too low" << std::endl;
	}
}